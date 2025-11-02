// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "assn3GameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeassn3GameMode() {}

// ********** Begin Cross Module References ********************************************************
ASSN3_API UClass* Z_Construct_UClass_Aassn3GameMode();
ASSN3_API UClass* Z_Construct_UClass_Aassn3GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_assn3();
// ********** End Cross Module References **********************************************************

// ********** Begin Class Aassn3GameMode ***********************************************************
void Aassn3GameMode::StaticRegisterNativesAassn3GameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_Aassn3GameMode;
UClass* Aassn3GameMode::GetPrivateStaticClass()
{
	using TClass = Aassn3GameMode;
	if (!Z_Registration_Info_UClass_Aassn3GameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("assn3GameMode"),
			Z_Registration_Info_UClass_Aassn3GameMode.InnerSingleton,
			StaticRegisterNativesAassn3GameMode,
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
	return Z_Registration_Info_UClass_Aassn3GameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_Aassn3GameMode_NoRegister()
{
	return Aassn3GameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_Aassn3GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple Game Mode for a top-down perspective game\n *  Sets the default gameplay framework classes\n *  Check the Blueprint derived class for the set values\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "assn3GameMode.h" },
		{ "ModuleRelativePath", "assn3GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Game Mode for a top-down perspective game\nSets the default gameplay framework classes\nCheck the Blueprint derived class for the set values" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aassn3GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Aassn3GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_assn3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aassn3GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Aassn3GameMode_Statics::ClassParams = {
	&Aassn3GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aassn3GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_Aassn3GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Aassn3GameMode()
{
	if (!Z_Registration_Info_UClass_Aassn3GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aassn3GameMode.OuterSingleton, Z_Construct_UClass_Aassn3GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Aassn3GameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Aassn3GameMode);
Aassn3GameMode::~Aassn3GameMode() {}
// ********** End Class Aassn3GameMode *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_assn3_Source_assn3_assn3GameMode_h__Script_assn3_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Aassn3GameMode, Aassn3GameMode::StaticClass, TEXT("Aassn3GameMode"), &Z_Registration_Info_UClass_Aassn3GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aassn3GameMode), 1429701684U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_assn3_Source_assn3_assn3GameMode_h__Script_assn3_30321209(TEXT("/Script/assn3"),
	Z_CompiledInDeferFile_FID_assn3_Source_assn3_assn3GameMode_h__Script_assn3_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_assn3_Source_assn3_assn3GameMode_h__Script_assn3_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
