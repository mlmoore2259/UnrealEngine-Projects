// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIController1.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAIController1() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
ASSN3_API UClass* Z_Construct_UClass_AAIController1();
ASSN3_API UClass* Z_Construct_UClass_AAIController1_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_assn3();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAIController1 Function AddNeighbors *************************************
struct Z_Construct_UFunction_AAIController1_AddNeighbors_Statics
{
	struct AIController1_eventAddNeighbors_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//void OnUnPossess() override;\n" },
#endif
		{ "ModuleRelativePath", "AIController1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "void OnUnPossess() override;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController1_eventAddNeighbors_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController1_eventAddNeighbors_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController1_eventAddNeighbors_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController1_eventAddNeighbors_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((AIController1_eventAddNeighbors_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIController1_eventAddNeighbors_Parms), &Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController1_eventAddNeighbors_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAIController1, nullptr, "AddNeighbors", Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::AIController1_eventAddNeighbors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::AIController1_eventAddNeighbors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController1_AddNeighbors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController1_AddNeighbors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController1::execAddNeighbors)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddNeighbors(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class AAIController1 Function AddNeighbors ***************************************

// ********** Begin Class AAIController1 Function RemoveNeighbors **********************************
struct Z_Construct_UFunction_AAIController1_RemoveNeighbors_Statics
{
	struct AIController1_eventRemoveNeighbors_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AIController1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController1_RemoveNeighbors_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController1_eventRemoveNeighbors_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController1_RemoveNeighbors_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController1_eventRemoveNeighbors_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController1_RemoveNeighbors_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController1_eventRemoveNeighbors_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAIController1_RemoveNeighbors_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController1_eventRemoveNeighbors_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController1_RemoveNeighbors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController1_RemoveNeighbors_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController1_RemoveNeighbors_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController1_RemoveNeighbors_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController1_RemoveNeighbors_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController1_RemoveNeighbors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController1_RemoveNeighbors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAIController1, nullptr, "RemoveNeighbors", Z_Construct_UFunction_AAIController1_RemoveNeighbors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController1_RemoveNeighbors_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController1_RemoveNeighbors_Statics::AIController1_eventRemoveNeighbors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController1_RemoveNeighbors_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController1_RemoveNeighbors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAIController1_RemoveNeighbors_Statics::AIController1_eventRemoveNeighbors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController1_RemoveNeighbors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController1_RemoveNeighbors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController1::execRemoveNeighbors)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveNeighbors(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class AAIController1 Function RemoveNeighbors ************************************

// ********** Begin Class AAIController1 ***********************************************************
void AAIController1::StaticRegisterNativesAAIController1()
{
	UClass* Class = AAIController1::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddNeighbors", &AAIController1::execAddNeighbors },
		{ "RemoveNeighbors", &AAIController1::execRemoveNeighbors },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAIController1;
UClass* AAIController1::GetPrivateStaticClass()
{
	using TClass = AAIController1;
	if (!Z_Registration_Info_UClass_AAIController1.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AIController1"),
			Z_Registration_Info_UClass_AAIController1.InnerSingleton,
			StaticRegisterNativesAAIController1,
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
	return Z_Registration_Info_UClass_AAIController1.InnerSingleton;
}
UClass* Z_Construct_UClass_AAIController1_NoRegister()
{
	return AAIController1::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAIController1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIController1.h" },
		{ "ModuleRelativePath", "AIController1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeighborhoodRadius_MetaData[] = {
		{ "Category", "AIController1" },
		{ "ModuleRelativePath", "AIController1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AIController1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Neighbors_MetaData[] = {
		{ "Category", "AIController1" },
		{ "ModuleRelativePath", "AIController1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuleOneCoeff_MetaData[] = {
		{ "Category", "AIController1" },
		{ "ModuleRelativePath", "AIController1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuleTwoCoeff_MetaData[] = {
		{ "Category", "AIController1" },
		{ "ModuleRelativePath", "AIController1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuleThreeCoeff_MetaData[] = {
		{ "Category", "AIController1" },
		{ "ModuleRelativePath", "AIController1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "AIController1" },
		{ "ModuleRelativePath", "AIController1.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NeighborhoodRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Neighbors_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Neighbors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RuleOneCoeff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RuleTwoCoeff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RuleThreeCoeff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIController1_AddNeighbors, "AddNeighbors" }, // 2577980450
		{ &Z_Construct_UFunction_AAIController1_RemoveNeighbors, "RemoveNeighbors" }, // 367273507
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIController1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIController1_Statics::NewProp_NeighborhoodRadius = { "NeighborhoodRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIController1, NeighborhoodRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeighborhoodRadius_MetaData), NewProp_NeighborhoodRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIController1_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIController1, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComponent_MetaData), NewProp_SphereComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIController1_Statics::NewProp_Neighbors_ElementProp = { "Neighbors", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AAIController1_Statics::NewProp_Neighbors = { "Neighbors", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIController1, Neighbors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Neighbors_MetaData), NewProp_Neighbors_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIController1_Statics::NewProp_RuleOneCoeff = { "RuleOneCoeff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIController1, RuleOneCoeff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuleOneCoeff_MetaData), NewProp_RuleOneCoeff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIController1_Statics::NewProp_RuleTwoCoeff = { "RuleTwoCoeff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIController1, RuleTwoCoeff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuleTwoCoeff_MetaData), NewProp_RuleTwoCoeff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIController1_Statics::NewProp_RuleThreeCoeff = { "RuleThreeCoeff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIController1, RuleThreeCoeff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuleThreeCoeff_MetaData), NewProp_RuleThreeCoeff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIController1_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIController1, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIController1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController1_Statics::NewProp_NeighborhoodRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController1_Statics::NewProp_SphereComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController1_Statics::NewProp_Neighbors_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController1_Statics::NewProp_Neighbors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController1_Statics::NewProp_RuleOneCoeff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController1_Statics::NewProp_RuleTwoCoeff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController1_Statics::NewProp_RuleThreeCoeff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController1_Statics::NewProp_MaxSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIController1_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAIController1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_assn3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIController1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIController1_Statics::ClassParams = {
	&AAIController1::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAIController1_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAIController1_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIController1_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIController1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAIController1()
{
	if (!Z_Registration_Info_UClass_AAIController1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIController1.OuterSingleton, Z_Construct_UClass_AAIController1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAIController1.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAIController1);
AAIController1::~AAIController1() {}
// ********** End Class AAIController1 *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_assn3_Source_assn3_AIController1_h__Script_assn3_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAIController1, AAIController1::StaticClass, TEXT("AAIController1"), &Z_Registration_Info_UClass_AAIController1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIController1), 527053277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_assn3_Source_assn3_AIController1_h__Script_assn3_23315647(TEXT("/Script/assn3"),
	Z_CompiledInDeferFile_FID_assn3_Source_assn3_AIController1_h__Script_assn3_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_assn3_Source_assn3_AIController1_h__Script_assn3_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
