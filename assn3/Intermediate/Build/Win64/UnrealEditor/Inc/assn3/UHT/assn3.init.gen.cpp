// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeassn3_init() {}
	ASSN3_API UFunction* Z_Construct_UDelegateFunction_assn3_OnUnitMoveCompletedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_assn3;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_assn3()
	{
		if (!Z_Registration_Info_UPackage__Script_assn3.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_assn3_OnUnitMoveCompletedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/assn3",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xBE1F9645,
				0x48ED9268,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_assn3.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_assn3.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_assn3(Z_Construct_UPackage__Script_assn3, TEXT("/Script/assn3"), Z_Registration_Info_UPackage__Script_assn3, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBE1F9645, 0x48ED9268));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
