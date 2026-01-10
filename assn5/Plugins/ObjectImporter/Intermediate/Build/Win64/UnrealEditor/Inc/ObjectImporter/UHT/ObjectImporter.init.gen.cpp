// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectImporter_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ObjectImporter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ObjectImporter()
	{
		if (!Z_Registration_Info_UPackage__Script_ObjectImporter.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ObjectImporter",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x55129ACC,
				0x26240A5B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ObjectImporter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ObjectImporter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ObjectImporter(Z_Construct_UPackage__Script_ObjectImporter, TEXT("/Script/ObjectImporter"), Z_Registration_Info_UPackage__Script_ObjectImporter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x55129ACC, 0x26240A5B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
