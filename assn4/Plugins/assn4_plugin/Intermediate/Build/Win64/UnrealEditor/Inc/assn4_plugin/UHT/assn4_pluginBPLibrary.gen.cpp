// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "assn4_pluginBPLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeassn4_pluginBPLibrary() {}

// ********** Begin Cross Module References ********************************************************
ASSN4_PLUGIN_API UClass* Z_Construct_UClass_Uassn4_pluginBPLibrary();
ASSN4_PLUGIN_API UClass* Z_Construct_UClass_Uassn4_pluginBPLibrary_NoRegister();
ASSN4_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPointData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_assn4_plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPointData ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPointData;
class UScriptStruct* FPointData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPointData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPointData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointData, (UObject*)Z_Construct_UPackage__Script_assn4_plugin(), TEXT("PointData"));
	}
	return Z_Registration_Info_UScriptStruct_FPointData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPointData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
#endif
		{ "HasNativeMake", "true" },
		{ "ModuleRelativePath", "Public/assn4_pluginBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[] = {
		{ "Category", "assn4_plugin" },
		{ "ModuleRelativePath", "Public/assn4_pluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeX_MetaData[] = {
		{ "Category", "assn4_plugin" },
		{ "ModuleRelativePath", "Public/assn4_pluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeY_MetaData[] = {
		{ "Category", "assn4_plugin" },
		{ "ModuleRelativePath", "Public/assn4_pluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "assn4_plugin" },
		{ "ModuleRelativePath", "Public/assn4_pluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RangeX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RangeY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointData_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointData, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomStream_MetaData), NewProp_RandomStream_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointData_Statics::NewProp_RangeX = { "RangeX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointData, RangeX), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeX_MetaData), NewProp_RangeX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointData_Statics::NewProp_RangeY = { "RangeY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointData, RangeY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeY_MetaData), NewProp_RangeY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointData_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPointData_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointData, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointData_Statics::NewProp_RandomStream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointData_Statics::NewProp_RangeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointData_Statics::NewProp_RangeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointData_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointData_Statics::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_assn4_plugin,
	nullptr,
	&NewStructOps,
	"PointData",
	Z_Construct_UScriptStruct_FPointData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointData_Statics::PropPointers),
	sizeof(FPointData),
	alignof(FPointData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPointData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPointData()
{
	if (!Z_Registration_Info_UScriptStruct_FPointData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPointData.InnerSingleton, Z_Construct_UScriptStruct_FPointData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPointData.InnerSingleton;
}
// ********** End ScriptStruct FPointData **********************************************************

// ********** Begin Class Uassn4_pluginBPLibrary Function assn4_pluginSampleFunction ***************
struct Z_Construct_UFunction_Uassn4_pluginBPLibrary_assn4_pluginSampleFunction_Statics
{
	struct assn4_pluginBPLibrary_eventassn4_pluginSampleFunction_Parms
	{
		float Param;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "assn4_pluginTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "assn4_plugin sample test testing" },
		{ "ModuleRelativePath", "Public/assn4_pluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Uassn4_pluginBPLibrary_assn4_pluginSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(assn4_pluginBPLibrary_eventassn4_pluginSampleFunction_Parms, Param), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Uassn4_pluginBPLibrary_assn4_pluginSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(assn4_pluginBPLibrary_eventassn4_pluginSampleFunction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Uassn4_pluginBPLibrary_assn4_pluginSampleFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uassn4_pluginBPLibrary_assn4_pluginSampleFunction_Statics::NewProp_Param,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uassn4_pluginBPLibrary_assn4_pluginSampleFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Uassn4_pluginBPLibrary_assn4_pluginSampleFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Uassn4_pluginBPLibrary_assn4_pluginSampleFunction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_Uassn4_pluginBPLibrary, nullptr, "assn4_pluginSampleFunction", Z_Construct_UFunction_Uassn4_pluginBPLibrary_assn4_pluginSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Uassn4_pluginBPLibrary_assn4_pluginSampleFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_Uassn4_pluginBPLibrary_assn4_pluginSampleFunction_Statics::assn4_pluginBPLibrary_eventassn4_pluginSampleFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Uassn4_pluginBPLibrary_assn4_pluginSampleFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_Uassn4_pluginBPLibrary_assn4_pluginSampleFunction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_Uassn4_pluginBPLibrary_assn4_pluginSampleFunction_Statics::assn4_pluginBPLibrary_eventassn4_pluginSampleFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_Uassn4_pluginBPLibrary_assn4_pluginSampleFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Uassn4_pluginBPLibrary_assn4_pluginSampleFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(Uassn4_pluginBPLibrary::execassn4_pluginSampleFunction)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=Uassn4_pluginBPLibrary::assn4_pluginSampleFunction(Z_Param_Param);
	P_NATIVE_END;
}
// ********** End Class Uassn4_pluginBPLibrary Function assn4_pluginSampleFunction *****************

// ********** Begin Class Uassn4_pluginBPLibrary Function GeneratePoint ****************************
struct Z_Construct_UFunction_Uassn4_pluginBPLibrary_GeneratePoint_Statics
{
	struct assn4_pluginBPLibrary_eventGeneratePoint_Parms
	{
		FPointData pointData;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "assn4_plugin" },
		{ "DisplayName", "Get Random Point" },
		{ "Keywords", "assn4_plugin generate random point" },
		{ "ModuleRelativePath", "Public/assn4_pluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_pointData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Uassn4_pluginBPLibrary_GeneratePoint_Statics::NewProp_pointData = { "pointData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(assn4_pluginBPLibrary_eventGeneratePoint_Parms, pointData), Z_Construct_UScriptStruct_FPointData, METADATA_PARAMS(0, nullptr) }; // 3078095109
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Uassn4_pluginBPLibrary_GeneratePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(assn4_pluginBPLibrary_eventGeneratePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Uassn4_pluginBPLibrary_GeneratePoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uassn4_pluginBPLibrary_GeneratePoint_Statics::NewProp_pointData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uassn4_pluginBPLibrary_GeneratePoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Uassn4_pluginBPLibrary_GeneratePoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Uassn4_pluginBPLibrary_GeneratePoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_Uassn4_pluginBPLibrary, nullptr, "GeneratePoint", Z_Construct_UFunction_Uassn4_pluginBPLibrary_GeneratePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Uassn4_pluginBPLibrary_GeneratePoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_Uassn4_pluginBPLibrary_GeneratePoint_Statics::assn4_pluginBPLibrary_eventGeneratePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Uassn4_pluginBPLibrary_GeneratePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_Uassn4_pluginBPLibrary_GeneratePoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_Uassn4_pluginBPLibrary_GeneratePoint_Statics::assn4_pluginBPLibrary_eventGeneratePoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_Uassn4_pluginBPLibrary_GeneratePoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Uassn4_pluginBPLibrary_GeneratePoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(Uassn4_pluginBPLibrary::execGeneratePoint)
{
	P_GET_STRUCT_REF(FPointData,Z_Param_Out_pointData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=Uassn4_pluginBPLibrary::GeneratePoint(Z_Param_Out_pointData);
	P_NATIVE_END;
}
// ********** End Class Uassn4_pluginBPLibrary Function GeneratePoint ******************************

// ********** Begin Class Uassn4_pluginBPLibrary Function MakeBlueNoiseStream **********************
struct Z_Construct_UFunction_Uassn4_pluginBPLibrary_MakeBlueNoiseStream_Statics
{
	struct assn4_pluginBPLibrary_eventMakeBlueNoiseStream_Parms
	{
		int32 Seed;
		FVector2D RangeX;
		FVector2D RangeY;
		FPointData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "assn4_plugin" },
		{ "DisplayName", "Make Blue Noise Stream" },
		{ "Keywords", "assn4_plugin generate random points" },
		{ "ModuleRelativePath", "Public/assn4_pluginBPLibrary.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RangeX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RangeY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Uassn4_pluginBPLibrary_MakeBlueNoiseStream_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(assn4_pluginBPLibrary_eventMakeBlueNoiseStream_Parms, Seed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Uassn4_pluginBPLibrary_MakeBlueNoiseStream_Statics::NewProp_RangeX = { "RangeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(assn4_pluginBPLibrary_eventMakeBlueNoiseStream_Parms, RangeX), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Uassn4_pluginBPLibrary_MakeBlueNoiseStream_Statics::NewProp_RangeY = { "RangeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(assn4_pluginBPLibrary_eventMakeBlueNoiseStream_Parms, RangeY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Uassn4_pluginBPLibrary_MakeBlueNoiseStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(assn4_pluginBPLibrary_eventMakeBlueNoiseStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FPointData, METADATA_PARAMS(0, nullptr) }; // 3078095109
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Uassn4_pluginBPLibrary_MakeBlueNoiseStream_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uassn4_pluginBPLibrary_MakeBlueNoiseStream_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uassn4_pluginBPLibrary_MakeBlueNoiseStream_Statics::NewProp_RangeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uassn4_pluginBPLibrary_MakeBlueNoiseStream_Statics::NewProp_RangeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uassn4_pluginBPLibrary_MakeBlueNoiseStream_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Uassn4_pluginBPLibrary_MakeBlueNoiseStream_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Uassn4_pluginBPLibrary_MakeBlueNoiseStream_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_Uassn4_pluginBPLibrary, nullptr, "MakeBlueNoiseStream", Z_Construct_UFunction_Uassn4_pluginBPLibrary_MakeBlueNoiseStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Uassn4_pluginBPLibrary_MakeBlueNoiseStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_Uassn4_pluginBPLibrary_MakeBlueNoiseStream_Statics::assn4_pluginBPLibrary_eventMakeBlueNoiseStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Uassn4_pluginBPLibrary_MakeBlueNoiseStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_Uassn4_pluginBPLibrary_MakeBlueNoiseStream_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_Uassn4_pluginBPLibrary_MakeBlueNoiseStream_Statics::assn4_pluginBPLibrary_eventMakeBlueNoiseStream_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_Uassn4_pluginBPLibrary_MakeBlueNoiseStream()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Uassn4_pluginBPLibrary_MakeBlueNoiseStream_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(Uassn4_pluginBPLibrary::execMakeBlueNoiseStream)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
	P_GET_STRUCT(FVector2D,Z_Param_RangeX);
	P_GET_STRUCT(FVector2D,Z_Param_RangeY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPointData*)Z_Param__Result=Uassn4_pluginBPLibrary::MakeBlueNoiseStream(Z_Param_Seed,Z_Param_RangeX,Z_Param_RangeY);
	P_NATIVE_END;
}
// ********** End Class Uassn4_pluginBPLibrary Function MakeBlueNoiseStream ************************

// ********** Begin Class Uassn4_pluginBPLibrary Function MitchellsBestCandidate *******************
struct Z_Construct_UFunction_Uassn4_pluginBPLibrary_MitchellsBestCandidate_Statics
{
	struct assn4_pluginBPLibrary_eventMitchellsBestCandidate_Parms
	{
		FPointData pointData;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "assn4_plugin" },
		{ "DisplayName", "Get Blue Noise Point" },
		{ "Keywords", "assn4_plugin generates point using Mitchells best candidate algorithm" },
		{ "ModuleRelativePath", "Public/assn4_pluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_pointData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Uassn4_pluginBPLibrary_MitchellsBestCandidate_Statics::NewProp_pointData = { "pointData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(assn4_pluginBPLibrary_eventMitchellsBestCandidate_Parms, pointData), Z_Construct_UScriptStruct_FPointData, METADATA_PARAMS(0, nullptr) }; // 3078095109
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Uassn4_pluginBPLibrary_MitchellsBestCandidate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(assn4_pluginBPLibrary_eventMitchellsBestCandidate_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Uassn4_pluginBPLibrary_MitchellsBestCandidate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uassn4_pluginBPLibrary_MitchellsBestCandidate_Statics::NewProp_pointData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uassn4_pluginBPLibrary_MitchellsBestCandidate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Uassn4_pluginBPLibrary_MitchellsBestCandidate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Uassn4_pluginBPLibrary_MitchellsBestCandidate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_Uassn4_pluginBPLibrary, nullptr, "MitchellsBestCandidate", Z_Construct_UFunction_Uassn4_pluginBPLibrary_MitchellsBestCandidate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Uassn4_pluginBPLibrary_MitchellsBestCandidate_Statics::PropPointers), sizeof(Z_Construct_UFunction_Uassn4_pluginBPLibrary_MitchellsBestCandidate_Statics::assn4_pluginBPLibrary_eventMitchellsBestCandidate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Uassn4_pluginBPLibrary_MitchellsBestCandidate_Statics::Function_MetaDataParams), Z_Construct_UFunction_Uassn4_pluginBPLibrary_MitchellsBestCandidate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_Uassn4_pluginBPLibrary_MitchellsBestCandidate_Statics::assn4_pluginBPLibrary_eventMitchellsBestCandidate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_Uassn4_pluginBPLibrary_MitchellsBestCandidate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Uassn4_pluginBPLibrary_MitchellsBestCandidate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(Uassn4_pluginBPLibrary::execMitchellsBestCandidate)
{
	P_GET_STRUCT_REF(FPointData,Z_Param_Out_pointData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=Uassn4_pluginBPLibrary::MitchellsBestCandidate(Z_Param_Out_pointData);
	P_NATIVE_END;
}
// ********** End Class Uassn4_pluginBPLibrary Function MitchellsBestCandidate *********************

// ********** Begin Class Uassn4_pluginBPLibrary ***************************************************
void Uassn4_pluginBPLibrary::StaticRegisterNativesUassn4_pluginBPLibrary()
{
	UClass* Class = Uassn4_pluginBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "assn4_pluginSampleFunction", &Uassn4_pluginBPLibrary::execassn4_pluginSampleFunction },
		{ "GeneratePoint", &Uassn4_pluginBPLibrary::execGeneratePoint },
		{ "MakeBlueNoiseStream", &Uassn4_pluginBPLibrary::execMakeBlueNoiseStream },
		{ "MitchellsBestCandidate", &Uassn4_pluginBPLibrary::execMitchellsBestCandidate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_Uassn4_pluginBPLibrary;
UClass* Uassn4_pluginBPLibrary::GetPrivateStaticClass()
{
	using TClass = Uassn4_pluginBPLibrary;
	if (!Z_Registration_Info_UClass_Uassn4_pluginBPLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("assn4_pluginBPLibrary"),
			Z_Registration_Info_UClass_Uassn4_pluginBPLibrary.InnerSingleton,
			StaticRegisterNativesUassn4_pluginBPLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_Uassn4_pluginBPLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_Uassn4_pluginBPLibrary_NoRegister()
{
	return Uassn4_pluginBPLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_Uassn4_pluginBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "assn4_pluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/assn4_pluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_Uassn4_pluginBPLibrary_assn4_pluginSampleFunction, "assn4_pluginSampleFunction" }, // 2641722094
		{ &Z_Construct_UFunction_Uassn4_pluginBPLibrary_GeneratePoint, "GeneratePoint" }, // 414787293
		{ &Z_Construct_UFunction_Uassn4_pluginBPLibrary_MakeBlueNoiseStream, "MakeBlueNoiseStream" }, // 3306237756
		{ &Z_Construct_UFunction_Uassn4_pluginBPLibrary_MitchellsBestCandidate, "MitchellsBestCandidate" }, // 2276960236
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Uassn4_pluginBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Uassn4_pluginBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_assn4_plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Uassn4_pluginBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Uassn4_pluginBPLibrary_Statics::ClassParams = {
	&Uassn4_pluginBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Uassn4_pluginBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_Uassn4_pluginBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Uassn4_pluginBPLibrary()
{
	if (!Z_Registration_Info_UClass_Uassn4_pluginBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Uassn4_pluginBPLibrary.OuterSingleton, Z_Construct_UClass_Uassn4_pluginBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Uassn4_pluginBPLibrary.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Uassn4_pluginBPLibrary);
Uassn4_pluginBPLibrary::~Uassn4_pluginBPLibrary() {}
// ********** End Class Uassn4_pluginBPLibrary *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_assn4_Plugins_assn4_plugin_Source_assn4_plugin_Public_assn4_pluginBPLibrary_h__Script_assn4_plugin_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPointData::StaticStruct, Z_Construct_UScriptStruct_FPointData_Statics::NewStructOps, TEXT("PointData"), &Z_Registration_Info_UScriptStruct_FPointData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPointData), 3078095109U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Uassn4_pluginBPLibrary, Uassn4_pluginBPLibrary::StaticClass, TEXT("Uassn4_pluginBPLibrary"), &Z_Registration_Info_UClass_Uassn4_pluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Uassn4_pluginBPLibrary), 3145660185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_assn4_Plugins_assn4_plugin_Source_assn4_plugin_Public_assn4_pluginBPLibrary_h__Script_assn4_plugin_2653475729(TEXT("/Script/assn4_plugin"),
	Z_CompiledInDeferFile_FID_assn4_Plugins_assn4_plugin_Source_assn4_plugin_Public_assn4_pluginBPLibrary_h__Script_assn4_plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_assn4_Plugins_assn4_plugin_Source_assn4_plugin_Public_assn4_pluginBPLibrary_h__Script_assn4_plugin_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_assn4_Plugins_assn4_plugin_Source_assn4_plugin_Public_assn4_pluginBPLibrary_h__Script_assn4_plugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_assn4_Plugins_assn4_plugin_Source_assn4_plugin_Public_assn4_pluginBPLibrary_h__Script_assn4_plugin_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
