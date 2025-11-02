// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIController1.h"

#ifdef ASSN3_AIController1_generated_h
#error "AIController1.generated.h already included, missing '#pragma once' in AIController1.h"
#endif
#define ASSN3_AIController1_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AAIController1 ***********************************************************
#define FID_assn3_Source_assn3_AIController1_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveNeighbors); \
	DECLARE_FUNCTION(execAddNeighbors);


ASSN3_API UClass* Z_Construct_UClass_AAIController1_NoRegister();

#define FID_assn3_Source_assn3_AIController1_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIController1(); \
	friend struct Z_Construct_UClass_AAIController1_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSN3_API UClass* Z_Construct_UClass_AAIController1_NoRegister(); \
public: \
	DECLARE_CLASS2(AAIController1, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/assn3"), Z_Construct_UClass_AAIController1_NoRegister) \
	DECLARE_SERIALIZER(AAIController1)


#define FID_assn3_Source_assn3_AIController1_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAIController1(AAIController1&&) = delete; \
	AAIController1(const AAIController1&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIController1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIController1); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIController1) \
	NO_API virtual ~AAIController1();


#define FID_assn3_Source_assn3_AIController1_h_13_PROLOG
#define FID_assn3_Source_assn3_AIController1_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_assn3_Source_assn3_AIController1_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_assn3_Source_assn3_AIController1_h_16_INCLASS_NO_PURE_DECLS \
	FID_assn3_Source_assn3_AIController1_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAIController1;

// ********** End Class AAIController1 *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_assn3_Source_assn3_AIController1_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
