// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "AssetLoader.generated.h"

/**
 * 
 */
UCLASS()
class UAssetLoader : public UFactory
{
	GENERATED_BODY()
public:
	UAssetLoader();	

	// Function used for debugging file parse
	void PrintToLog(const FString& FilePath);

	// Processes the pfm file information and returns a boolean value whether it was successful or not
	bool ProcessPFMFile(const FString& Filename);

	virtual UObject* FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled) override;
};
