// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetLoader.h"

#ifdef OBJECTIMPORTER_AssetLoader_generated_h
#error "AssetLoader.generated.h already included, missing '#pragma once' in AssetLoader.h"
#endif
#define OBJECTIMPORTER_AssetLoader_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetLoader *************************************************************
OBJECTIMPORTER_API UClass* Z_Construct_UClass_UAssetLoader_NoRegister();

#define FID_assn5_Plugins_ObjectImporter_Source_ObjectImporter_Private_AssetLoader_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetLoader(); \
	friend struct Z_Construct_UClass_UAssetLoader_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBJECTIMPORTER_API UClass* Z_Construct_UClass_UAssetLoader_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetLoader, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ObjectImporter"), Z_Construct_UClass_UAssetLoader_NoRegister) \
	DECLARE_SERIALIZER(UAssetLoader)


#define FID_assn5_Plugins_ObjectImporter_Source_ObjectImporter_Private_AssetLoader_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetLoader(UAssetLoader&&) = delete; \
	UAssetLoader(const UAssetLoader&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetLoader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetLoader); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetLoader) \
	NO_API virtual ~UAssetLoader();


#define FID_assn5_Plugins_ObjectImporter_Source_ObjectImporter_Private_AssetLoader_h_12_PROLOG
#define FID_assn5_Plugins_ObjectImporter_Source_ObjectImporter_Private_AssetLoader_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_assn5_Plugins_ObjectImporter_Source_ObjectImporter_Private_AssetLoader_h_15_INCLASS_NO_PURE_DECLS \
	FID_assn5_Plugins_ObjectImporter_Source_ObjectImporter_Private_AssetLoader_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetLoader;

// ********** End Class UAssetLoader ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_assn5_Plugins_ObjectImporter_Source_ObjectImporter_Private_AssetLoader_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
