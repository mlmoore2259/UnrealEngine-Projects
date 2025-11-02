// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MazeActor.h"

#ifdef ASSN2_MazeActor_generated_h
#error "MazeActor.generated.h already included, missing '#pragma once' in MazeActor.h"
#endif
#define ASSN2_MazeActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMazeActor ***************************************************************
ASSN2_API UClass* Z_Construct_UClass_AMazeActor_NoRegister();

#define FID_assn2_Source_assn2_MazeActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMazeActor(); \
	friend struct Z_Construct_UClass_AMazeActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSN2_API UClass* Z_Construct_UClass_AMazeActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AMazeActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/assn2"), Z_Construct_UClass_AMazeActor_NoRegister) \
	DECLARE_SERIALIZER(AMazeActor)


#define FID_assn2_Source_assn2_MazeActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMazeActor(AMazeActor&&) = delete; \
	AMazeActor(const AMazeActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMazeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMazeActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMazeActor) \
	NO_API virtual ~AMazeActor();


#define FID_assn2_Source_assn2_MazeActor_h_10_PROLOG
#define FID_assn2_Source_assn2_MazeActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_assn2_Source_assn2_MazeActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_assn2_Source_assn2_MazeActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMazeActor;

// ********** End Class AMazeActor *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_assn2_Source_assn2_MazeActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
