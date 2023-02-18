// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSPROJECT_FPSRangeWeapon_generated_h
#error "FPSRangeWeapon.generated.h already included, missing '#pragma once' in FPSRangeWeapon.h"
#endif
#define FPSPROJECT_FPSRangeWeapon_generated_h

#define FPSProject_Source_FPSProject_FPSRangeWeapon_h_12_SPARSE_DATA
#define FPSProject_Source_FPSProject_FPSRangeWeapon_h_12_RPC_WRAPPERS
#define FPSProject_Source_FPSProject_FPSRangeWeapon_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FPSProject_Source_FPSProject_FPSRangeWeapon_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSRangeWeapon(); \
	friend struct Z_Construct_UClass_AFPSRangeWeapon_Statics; \
public: \
	DECLARE_CLASS(AFPSRangeWeapon, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSProject"), NO_API) \
	DECLARE_SERIALIZER(AFPSRangeWeapon)


#define FPSProject_Source_FPSProject_FPSRangeWeapon_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFPSRangeWeapon(); \
	friend struct Z_Construct_UClass_AFPSRangeWeapon_Statics; \
public: \
	DECLARE_CLASS(AFPSRangeWeapon, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSProject"), NO_API) \
	DECLARE_SERIALIZER(AFPSRangeWeapon)


#define FPSProject_Source_FPSProject_FPSRangeWeapon_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSRangeWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSRangeWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSRangeWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSRangeWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSRangeWeapon(AFPSRangeWeapon&&); \
	NO_API AFPSRangeWeapon(const AFPSRangeWeapon&); \
public:


#define FPSProject_Source_FPSProject_FPSRangeWeapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSRangeWeapon(AFPSRangeWeapon&&); \
	NO_API AFPSRangeWeapon(const AFPSRangeWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSRangeWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSRangeWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSRangeWeapon)


#define FPSProject_Source_FPSProject_FPSRangeWeapon_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxAmmo() { return STRUCT_OFFSET(AFPSRangeWeapon, MaxAmmo); } \
	FORCEINLINE static uint32 __PPO__CurrentAmmo() { return STRUCT_OFFSET(AFPSRangeWeapon, CurrentAmmo); }


#define FPSProject_Source_FPSProject_FPSRangeWeapon_h_9_PROLOG
#define FPSProject_Source_FPSProject_FPSRangeWeapon_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSProject_Source_FPSProject_FPSRangeWeapon_h_12_PRIVATE_PROPERTY_OFFSET \
	FPSProject_Source_FPSProject_FPSRangeWeapon_h_12_SPARSE_DATA \
	FPSProject_Source_FPSProject_FPSRangeWeapon_h_12_RPC_WRAPPERS \
	FPSProject_Source_FPSProject_FPSRangeWeapon_h_12_INCLASS \
	FPSProject_Source_FPSProject_FPSRangeWeapon_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSProject_Source_FPSProject_FPSRangeWeapon_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSProject_Source_FPSProject_FPSRangeWeapon_h_12_PRIVATE_PROPERTY_OFFSET \
	FPSProject_Source_FPSProject_FPSRangeWeapon_h_12_SPARSE_DATA \
	FPSProject_Source_FPSProject_FPSRangeWeapon_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSProject_Source_FPSProject_FPSRangeWeapon_h_12_INCLASS_NO_PURE_DECLS \
	FPSProject_Source_FPSProject_FPSRangeWeapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSPROJECT_API UClass* StaticClass<class AFPSRangeWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSProject_Source_FPSProject_FPSRangeWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
