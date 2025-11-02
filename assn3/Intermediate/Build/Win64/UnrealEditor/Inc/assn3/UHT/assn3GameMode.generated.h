// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "assn3GameMode.h"

#ifdef ASSN3_assn3GameMode_generated_h
#error "assn3GameMode.generated.h already included, missing '#pragma once' in assn3GameMode.h"
#endif
#define ASSN3_assn3GameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class Aassn3GameMode ***********************************************************
ASSN3_API UClass* Z_Construct_UClass_Aassn3GameMode_NoRegister();

#define FID_assn3_Source_assn3_assn3GameMode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAassn3GameMode(); \
	friend struct Z_Construct_UClass_Aassn3GameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSN3_API UClass* Z_Construct_UClass_Aassn3GameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(Aassn3GameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/assn3"), Z_Construct_UClass_Aassn3GameMode_NoRegister) \
	DECLARE_SERIALIZER(Aassn3GameMode)


#define FID_assn3_Source_assn3_assn3GameMode_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	Aassn3GameMode(Aassn3GameMode&&) = delete; \
	Aassn3GameMode(const Aassn3GameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aassn3GameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aassn3GameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(Aassn3GameMode) \
	NO_API virtual ~Aassn3GameMode();


#define FID_assn3_Source_assn3_assn3GameMode_h_14_PROLOG
#define FID_assn3_Source_assn3_assn3GameMode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_assn3_Source_assn3_assn3GameMode_h_17_INCLASS_NO_PURE_DECLS \
	FID_assn3_Source_assn3_assn3GameMode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class Aassn3GameMode;

// ********** End Class Aassn3GameMode *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_assn3_Source_assn3_assn3GameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
