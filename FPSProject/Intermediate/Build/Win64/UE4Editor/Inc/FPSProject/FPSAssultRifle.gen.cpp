// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSProject/FPSAssultRifle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSAssultRifle() {}
// Cross Module References
	FPSPROJECT_API UClass* Z_Construct_UClass_AFPSAssultRifle_NoRegister();
	FPSPROJECT_API UClass* Z_Construct_UClass_AFPSAssultRifle();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSProject();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AFPSAssultRifle::StaticRegisterNativesAFPSAssultRifle()
	{
	}
	UClass* Z_Construct_UClass_AFPSAssultRifle_NoRegister()
	{
		return AFPSAssultRifle::StaticClass();
	}
	struct Z_Construct_UClass_AFPSAssultRifle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSAssultRifle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAssultRifle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FPSAssultRifle.h" },
		{ "ModuleRelativePath", "FPSAssultRifle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAssultRifle_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSAssultRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSAssultRifle_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAssultRifle, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSAssultRifle_Statics::NewProp_WeaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAssultRifle_Statics::NewProp_WeaponMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSAssultRifle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAssultRifle_Statics::NewProp_WeaponMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSAssultRifle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSAssultRifle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSAssultRifle_Statics::ClassParams = {
		&AFPSAssultRifle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFPSAssultRifle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAssultRifle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSAssultRifle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAssultRifle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSAssultRifle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSAssultRifle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSAssultRifle, 4066804991);
	template<> FPSPROJECT_API UClass* StaticClass<AFPSAssultRifle>()
	{
		return AFPSAssultRifle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSAssultRifle(Z_Construct_UClass_AFPSAssultRifle, &AFPSAssultRifle::StaticClass, TEXT("/Script/FPSProject"), TEXT("AFPSAssultRifle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSAssultRifle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
