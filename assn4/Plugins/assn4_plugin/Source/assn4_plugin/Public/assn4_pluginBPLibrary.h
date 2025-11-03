// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "assn4_pluginBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/

USTRUCT(BlueprintType, meta=(HasNativeMake="true"))
struct FPointData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = "assn4_plugin")
	FRandomStream RandomStream;

	UPROPERTY(EditAnywhere, Category = "assn4_plugin")
	FVector2D RangeX;

	UPROPERTY(EditAnywhere, Category = "assn4_plugin")
	FVector2D RangeY;

	UPROPERTY(VisibleAnywhere, Category = "assn4_plugin")
	TArray<FVector2D> Points;
};

UCLASS()
class Uassn4_pluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, meta = (NativeMakeFunc, DisplayName = "Make Blue Noise Stream", Keywords = "assn4_plugin generate random points"), Category = "assn4_plugin")
	static FPointData MakeBlueNoiseStream(int Seed, FVector2D RangeX, FVector2D RangeY);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Blue Noise Point", Keywords = "assn4_plugin generates point using Mitchells best candidate algorithm"), Category = "assn4_plugin")
	static FVector MitchellsBestCandidate(UPARAM(ref) FPointData& pointData);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Random Point", Keywords = "assn4_plugin generate random point"), Category = "assn4_plugin")
	static FVector GeneratePoint(UPARAM(ref) FPointData& pointData);

	static float FindDistance(UPARAM(ref) FPointData& pointData, FVector A, FVector B);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "assn4_plugin sample test testing"), Category = "assn4_pluginTesting")
	static float assn4_pluginSampleFunction(float Param);
};
