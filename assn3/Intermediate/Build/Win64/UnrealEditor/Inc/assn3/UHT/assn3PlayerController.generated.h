// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "assn3PlayerController.h"

#ifdef ASSN3_assn3PlayerController_generated_h
#error "assn3PlayerController.generated.h already included, missing '#pragma once' in assn3PlayerController.h"
#endif
#define ASSN3_assn3PlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class Aassn3PlayerController ***************************************************
ASSN3_API UClass* Z_Construct_UClass_Aassn3PlayerController_NoRegister();

#define FID_assn3_Source_assn3_assn3PlayerController_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAassn3PlayerController(); \
	friend struct Z_Construct_UClass_Aassn3PlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSN3_API UClass* Z_Construct_UClass_Aassn3PlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(Aassn3PlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/assn3"), Z_Construct_UClass_Aassn3PlayerController_NoRegister) \
	DECLARE_SERIALIZER(Aassn3PlayerController)


#define FID_assn3_Source_assn3_assn3PlayerController_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	Aassn3PlayerController(Aassn3PlayerController&&) = delete; \
	Aassn3PlayerController(const Aassn3PlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aassn3PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aassn3PlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(Aassn3PlayerController) \
	NO_API virtual ~Aassn3PlayerController();


#define FID_assn3_Source_assn3_assn3PlayerController_h_20_PROLOG
#define FID_assn3_Source_assn3_assn3PlayerController_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_assn3_Source_assn3_assn3PlayerController_h_23_INCLASS_NO_PURE_DECLS \
	FID_assn3_Source_assn3_assn3PlayerController_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class Aassn3PlayerController;

// ********** End Class Aassn3PlayerController *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_assn3_Source_assn3_assn3PlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
