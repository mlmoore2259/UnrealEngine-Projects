// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "assn4_pluginBPLibrary.h"

#ifdef ASSN4_PLUGIN_assn4_pluginBPLibrary_generated_h
#error "assn4_pluginBPLibrary.generated.h already included, missing '#pragma once' in assn4_pluginBPLibrary.h"
#endif
#define ASSN4_PLUGIN_assn4_pluginBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FPointData;

// ********** Begin ScriptStruct FPointData ********************************************************
#define FID_assn4_Plugins_assn4_plugin_Source_assn4_plugin_Public_assn4_pluginBPLibrary_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPointData_Statics; \
	ASSN4_PLUGIN_API static class UScriptStruct* StaticStruct();


struct FPointData;
// ********** End ScriptStruct FPointData **********************************************************

// ********** Begin Class Uassn4_pluginBPLibrary ***************************************************
#define FID_assn4_Plugins_assn4_plugin_Source_assn4_plugin_Public_assn4_pluginBPLibrary_h_47_RPC_WRAPPERS \
	DECLARE_FUNCTION(execassn4_pluginSampleFunction); \
	DECLARE_FUNCTION(execGeneratePoint); \
	DECLARE_FUNCTION(execMitchellsBestCandidate); \
	DECLARE_FUNCTION(execMakeBlueNoiseStream);


ASSN4_PLUGIN_API UClass* Z_Construct_UClass_Uassn4_pluginBPLibrary_NoRegister();

#define FID_assn4_Plugins_assn4_plugin_Source_assn4_plugin_Public_assn4_pluginBPLibrary_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUassn4_pluginBPLibrary(); \
	friend struct Z_Construct_UClass_Uassn4_pluginBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSN4_PLUGIN_API UClass* Z_Construct_UClass_Uassn4_pluginBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(Uassn4_pluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/assn4_plugin"), Z_Construct_UClass_Uassn4_pluginBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(Uassn4_pluginBPLibrary)


#define FID_assn4_Plugins_assn4_plugin_Source_assn4_plugin_Public_assn4_pluginBPLibrary_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Uassn4_pluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Uassn4_pluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Uassn4_pluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Uassn4_pluginBPLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	Uassn4_pluginBPLibrary(Uassn4_pluginBPLibrary&&) = delete; \
	Uassn4_pluginBPLibrary(const Uassn4_pluginBPLibrary&) = delete; \
	NO_API virtual ~Uassn4_pluginBPLibrary();


#define FID_assn4_Plugins_assn4_plugin_Source_assn4_plugin_Public_assn4_pluginBPLibrary_h_44_PROLOG
#define FID_assn4_Plugins_assn4_plugin_Source_assn4_plugin_Public_assn4_pluginBPLibrary_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_assn4_Plugins_assn4_plugin_Source_assn4_plugin_Public_assn4_pluginBPLibrary_h_47_RPC_WRAPPERS \
	FID_assn4_Plugins_assn4_plugin_Source_assn4_plugin_Public_assn4_pluginBPLibrary_h_47_INCLASS \
	FID_assn4_Plugins_assn4_plugin_Source_assn4_plugin_Public_assn4_pluginBPLibrary_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class Uassn4_pluginBPLibrary;

// ********** End Class Uassn4_pluginBPLibrary *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_assn4_Plugins_assn4_plugin_Source_assn4_plugin_Public_assn4_pluginBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
