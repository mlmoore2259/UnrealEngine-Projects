// Fill out your copyright notice in the Description page of Project Settings.


#include "AssetLoader.h"
#include "HAL/FileManager.h"
#include "Misc/Paths.h"

UAssetLoader::UAssetLoader()
{
	SupportedClass = UTexture2D::StaticClass();
	Formats.Add(TEXT("pfm;portable float map"));
	bCreateNew = false;
	bEditorImport = true;
}

void UAssetLoader::PrintToLog(const FString& FilePath)
{
	if (!FPaths::FileExists(FilePath))
	{
		UE_LOG(LogTemp, Error, TEXT("File does not exist: %s"), *FilePath);
		return;
	}

	FString FileContents;
	if (!FFileHelper::LoadFileToString(FileContents, *FilePath))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load file: %s"), *FilePath);
		return;
	}

	TArray<FString> Lines;
	FileContents.ParseIntoArrayLines(Lines);

	UE_LOG(LogTemp, Log, TEXT("----- Start of file: %s -----"), *FilePath);
	for (const FString& Line : Lines)
	{
		UE_LOG(LogTemp, Log, TEXT("%s"), *Line);
	}
	UE_LOG(LogTemp, Log, TEXT("------ End of file ------"));
}

bool UAssetLoader::ProcessPFMFile(const FString& Filename)
{
	// File exists check
	if (!FPaths::FileExists(Filename))
	{
		UE_LOG(LogTemp, Error, TEXT("File does not exist: %s"), *Filename);
		return false;
	}

	// File opens check
	IFileManager& FileManager = IFileManager::Get();
	TUniquePtr<FArchive> FileReader(FileManager.CreateFileReader(*Filename));
	if (!FileReader)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to open file: %s"), *Filename);
		return false;
	}

	TArray<FString> HeaderLines; // Stores the three header lines
	int HeaderCount = 0; // Holds the number of header lines currently in the array
	while (!FileReader->AtEnd() && HeaderCount < 3) {
		FString Line;
		char c;

		while (!FileReader->AtEnd()) {
			FileReader->Serialize(&c, sizeof(char));

			if (c == '\n') {
				break;
			}

			// Skip comment lines
			if (c == '#') {
				while (!FileReader->AtEnd()) {
					FileReader->Serialize(&c, sizeof(char));
					if (c == '\n') {
						break;
					}
				}
				Line.Empty();
				break;
			}
			Line.AppendChar(c);
		}

		// Prevent empty or comment lines from being added
		if (!Line.IsEmpty()) {
			HeaderLines.Add(Line);
			HeaderCount++;
		}
	}

	// Debug: print the header lines
	for (int i = 0; i < HeaderLines.Num(); i++)
	{
		UE_LOG(LogTemp, Log, TEXT("Header %d: %s"), i + 1, *HeaderLines[i]);
	}

	int64 BinaryStartPos = FileReader->Tell();
	int64 FileSize = FileReader->TotalSize();
	int64 BinarySize = FileSize - BinaryStartPos;

	TArray<uint8> BinaryData;
	BinaryData.SetNum(BinarySize);

	if (BinarySize > 0) {
		FileReader->Serialize(BinaryData.GetData(), BinarySize);
		UE_LOG(LogTemp, Log, TEXT("Read %lld bytes of binary data."), BinarySize);
	}

	// Swap byts for endianness if needed
	float scale = FCString::Atof(*HeaderLines[2]);
	if (scale > 0.0f) {
		for (int64 i = 0; i < BinarySize; i += sizeof(float)) {
			uint8* bytePtr = &BinaryData[i];
			Swap(bytePtr[0], bytePtr[3]);
			Swap(bytePtr[1], bytePtr[2]);
		}
		UE_LOG(LogTemp, Log, TEXT("Swapped byte order for endianness."));
	}

	TArray<float> FloatPixels;
	FloatPixels.SetNum(BinarySize / sizeof(float));
	FMemory::Memcpy(FloatPixels.GetData(), BinaryData.GetData(), BinarySize);

	// Scale if needed
	float AbsScale = FMath::Abs(scale);
	if (AbsScale != 1.0f) {
		for (float& Pixel : FloatPixels) {
			Pixel /= AbsScale;
		}
	}

	return true;
}


UObject* UAssetLoader::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{
	// Empty texture for failure return
	UTexture2D* EmptyTexture = NewObject<UTexture2D>(InParent, "FAILED TO IMPORT", Flags);

	// Parse the file header information

	// File opens check
	IFileManager& FileManager = IFileManager::Get(); 
	TUniquePtr<FArchive> FileReader(FileManager.CreateFileReader(*Filename)); // Used to parse the file
	if (!FileReader)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to open file: %s"), *Filename);
		return EmptyTexture;
	}

	TArray<FString> HeaderLines; // Holds just the header lines from the pfm file
	int HeaderCount = 0; // Holds the number of header lines currently in the array
	FString Line = ""; // Current line of the pfm file
	bool DimensionsIndented = false; // Ture if dimensions are given on two lines instead of one
	while (!FileReader->AtEnd() && HeaderCount < 3) {
		char c;

		while (!FileReader->AtEnd()) {
			FileReader->Serialize(&c, sizeof(char));

			// Handle line endings adn determine if dimensions are indented
			if (c == '\n') {
				if (HeaderCount == 1 && !Line.Contains(TEXT(" "))) {
					DimensionsIndented = true;
					c = ' ';
				}
				else {
					DimensionsIndented = false;
					break;
				}
			}

			// Skip comment lines
			if (c == '#') {
				while (!FileReader->AtEnd()) {
					FileReader->Serialize(&c, sizeof(char));
					if (c == '\n') {
						break;
					}
				}
				Line.Empty();
				break;
			}
			Line.AppendChar(c);
		}

		// Prevent empty or comment lines from being added
		if (!Line.IsEmpty() && !DimensionsIndented) {
			HeaderLines.Add(Line);
			HeaderCount++;
			Line = "";
		}
	}

	// Debug: print the header lines
	for (int i = 0; i < HeaderLines.Num(); i++)
	{
		UE_LOG(LogTemp, Log, TEXT("Header %d: %s"), i + 1, *HeaderLines[i]);
	}

	// Process Header lines
	float scale = FCString::Atof(*HeaderLines[2]); // Scale factor
	float AbsScale = FMath::Abs(scale); // Absolute value of scale factor
	TArray<FString> Dimensions; // Holds the width and height strings

	// Change dimanesions from string to int
	HeaderLines[1].ParseIntoArray(Dimensions, TEXT(" "), true);
	int32 Width = FCString::Atoi(*Dimensions[0]);
	int32 Height = FCString::Atoi(*Dimensions[1]);

	// Determine whether it is a color or grayscale image
	bool IsColor;
	if (HeaderLines[0] == "PF") {
		IsColor = true;
	}
	else {
		IsColor = false;
	}

	// Prepare to read binary data
	int32 BinaryStartPos = FileReader->Tell();
	int32 FileSize = FileReader->TotalSize();
	int32 BinarySize = FileSize - BinaryStartPos;
	TArray<uint8> BinaryData;
	BinaryData.SetNum(BinarySize);

	// Read binary data
	if (BinarySize > 0) {
		FileReader->Serialize(BinaryData.GetData(), BinarySize);
	}

	// Swap byts for endianness if needed
	if (scale > 0.0f) {
		for (int32 i = 0; i < BinarySize; i += sizeof(float)) {
			uint8* bytePtr = &BinaryData[i];
			Swap(bytePtr[0], bytePtr[3]);
			Swap(bytePtr[1], bytePtr[2]);
		}
	}

	// Convert binary data to float
	TArray<float> FloatPixels;
	FloatPixels.SetNum(BinarySize / sizeof(float));
	FMemory::Memcpy(FloatPixels.GetData(), BinaryData.GetData(), BinarySize);

	// Scale if needed
	if (AbsScale != 1.0f) {
		for (float& Pixel : FloatPixels) {
			Pixel /= AbsScale;
		}
	}
	
	// Create the texture
	UTexture2D* Texture = NewObject<UTexture2D>(InParent, InName, Flags);

	// Set texture properties and flip data based on what UE expects
	// Color case
	if (IsColor) {
		Texture->Source.Init(Width, Height, 1, 1, TSF_RGBA32F);

		TArray<float> TempRGBA;
		TempRGBA.SetNumUninitialized(Width* Height * 4);
		for (int y = 0; y < Height; y++)
		{
			int SrcRow = y;
			int DstRow = Height - 1 - y;

			for (int x = 0; x < Width; x++)
			{
				int SrcIndex = (SrcRow * Width + x) * 3;
				int DstIndex = (DstRow * Width + x) * 4;

				TempRGBA[DstIndex + 0] = FloatPixels[SrcIndex + 0];
				TempRGBA[DstIndex + 1] = FloatPixels[SrcIndex + 1];
				TempRGBA[DstIndex + 2] = FloatPixels[SrcIndex + 2];
				TempRGBA[DstIndex + 3] = 1.0f;
			}
		}
		float* DestData = reinterpret_cast<float*>(Texture->Source.LockMip(0));
		FMemory::Memcpy(DestData, TempRGBA.GetData(), TempRGBA.Num() * sizeof(float));
		Texture->Source.UnlockMip(0);
	}
	// Grayscale case
	else {
		Texture->Source.Init(Width, Height, 1, 1, TSF_R32F);

		TArray<float> TempBuffer;
		TempBuffer.SetNumUninitialized(Width* Height);
		for (int y = 0; y < Height; y++)
		{
			int SrcRow = y;
			int DstRow = Height - 1 - y;
			for (int x = 0; x < Width; x++)
			{
				int SrcIndex = SrcRow * Width + x;
				int DstIndex = DstRow * Width + x;

				TempBuffer[DstIndex] = FloatPixels[SrcIndex];
			}
		}
		float* DestData = reinterpret_cast<float*>(Texture->Source.LockMip(0));
		FMemory::Memcpy(DestData, TempBuffer.GetData(), TempBuffer.Num() * sizeof(float));
		Texture->Source.UnlockMip(0);
	}
	Texture->CompressionSettings = TC_HDR;
	Texture->SRGB = false;
	Texture->UpdateResource();
	return Texture;
}