// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "assn2/MazeActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMazeActor() {}

// ********** Begin Cross Module References ********************************************************
ASSN2_API UClass* Z_Construct_UClass_AMazeActor();
ASSN2_API UClass* Z_Construct_UClass_AMazeActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_assn2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMazeActor ***************************************************************
void AMazeActor::StaticRegisterNativesAMazeActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMazeActor;
UClass* AMazeActor::GetPrivateStaticClass()
{
	using TClass = AMazeActor;
	if (!Z_Registration_Info_UClass_AMazeActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MazeActor"),
			Z_Registration_Info_UClass_AMazeActor.InnerSingleton,
			StaticRegisterNativesAMazeActor,
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
	return Z_Registration_Info_UClass_AMazeActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AMazeActor_NoRegister()
{
	return AMazeActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMazeActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MazeActor.h" },
		{ "ModuleRelativePath", "MazeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootSceneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ISMComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialAsset_MetaData[] = {
		{ "Category", "MazeActor" },
		{ "ModuleRelativePath", "MazeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MazeSize_MetaData[] = {
		{ "Category", "MazeActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Square size of the maze\n" },
#endif
		{ "ModuleRelativePath", "MazeActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Square size of the maze" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "MazeActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Seed for maze generation\n" },
#endif
		{ "ModuleRelativePath", "MazeActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Seed for maze generation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootSceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ISMComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialAsset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MazeSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMazeActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeActor_Statics::NewProp_RootSceneComponent = { "RootSceneComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeActor, RootSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootSceneComponent_MetaData), NewProp_RootSceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeActor_Statics::NewProp_ISMComponent = { "ISMComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeActor, ISMComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ISMComponent_MetaData), NewProp_ISMComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeActor_Statics::NewProp_MaterialAsset = { "MaterialAsset", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeActor, MaterialAsset), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialAsset_MetaData), NewProp_MaterialAsset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMazeActor_Statics::NewProp_MazeSize = { "MazeSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeActor, MazeSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MazeSize_MetaData), NewProp_MazeSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMazeActor_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeActor, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMazeActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeActor_Statics::NewProp_RootSceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeActor_Statics::NewProp_ISMComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeActor_Statics::NewProp_MaterialAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeActor_Statics::NewProp_MazeSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeActor_Statics::NewProp_RandomSeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMazeActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_assn2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMazeActor_Statics::ClassParams = {
	&AMazeActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMazeActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMazeActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMazeActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMazeActor()
{
	if (!Z_Registration_Info_UClass_AMazeActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMazeActor.OuterSingleton, Z_Construct_UClass_AMazeActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMazeActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMazeActor);
AMazeActor::~AMazeActor() {}
// ********** End Class AMazeActor *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_assn2_Source_assn2_MazeActor_h__Script_assn2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMazeActor, AMazeActor::StaticClass, TEXT("AMazeActor"), &Z_Registration_Info_UClass_AMazeActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMazeActor), 1670423539U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_assn2_Source_assn2_MazeActor_h__Script_assn2_3096821472(TEXT("/Script/assn2"),
	Z_CompiledInDeferFile_FID_assn2_Source_assn2_MazeActor_h__Script_assn2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_assn2_Source_assn2_MazeActor_h__Script_assn2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
