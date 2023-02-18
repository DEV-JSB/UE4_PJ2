// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSProject/FPSRangeWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSRangeWeapon() {}
// Cross Module References
	FPSPROJECT_API UClass* Z_Construct_UClass_AFPSRangeWeapon_NoRegister();
	FPSPROJECT_API UClass* Z_Construct_UClass_AFPSRangeWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSProject();
// End Cross Module References
	void AFPSRangeWeapon::StaticRegisterNativesAFPSRangeWeapon()
	{
	}
	UClass* Z_Construct_UClass_AFPSRangeWeapon_NoRegister()
	{
		return AFPSRangeWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AFPSRangeWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSRangeWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangeWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FPSRangeWeapon.h" },
		{ "ModuleRelativePath", "FPSRangeWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangeWeapon_Statics::NewProp_MaxAmmo_MetaData[] = {
		{ "Category", "WeaponInfo" },
		{ "ModuleRelativePath", "FPSRangeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSRangeWeapon_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangeWeapon, MaxAmmo), METADATA_PARAMS(Z_Construct_UClass_AFPSRangeWeapon_Statics::NewProp_MaxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangeWeapon_Statics::NewProp_MaxAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSRangeWeapon_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "Category", "WeaponInfo" },
		{ "ModuleRelativePath", "FPSRangeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSRangeWeapon_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSRangeWeapon, CurrentAmmo), METADATA_PARAMS(Z_Construct_UClass_AFPSRangeWeapon_Statics::NewProp_CurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangeWeapon_Statics::NewProp_CurrentAmmo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSRangeWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangeWeapon_Statics::NewProp_MaxAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSRangeWeapon_Statics::NewProp_CurrentAmmo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSRangeWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSRangeWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSRangeWeapon_Statics::ClassParams = {
		&AFPSRangeWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFPSRangeWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangeWeapon_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSRangeWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSRangeWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSRangeWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSRangeWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSRangeWeapon, 376327314);
	template<> FPSPROJECT_API UClass* StaticClass<AFPSRangeWeapon>()
	{
		return AFPSRangeWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSRangeWeapon(Z_Construct_UClass_AFPSRangeWeapon, &AFPSRangeWeapon::StaticClass, TEXT("/Script/FPSProject"), TEXT("AFPSRangeWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSRangeWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
