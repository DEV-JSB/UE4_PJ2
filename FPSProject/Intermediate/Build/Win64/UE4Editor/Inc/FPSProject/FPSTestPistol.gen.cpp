// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSProject/FPSTestPistol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSTestPistol() {}
// Cross Module References
	FPSPROJECT_API UClass* Z_Construct_UClass_AFPSTestPistol_NoRegister();
	FPSPROJECT_API UClass* Z_Construct_UClass_AFPSTestPistol();
	FPSPROJECT_API UClass* Z_Construct_UClass_AFPSRangeWeapon();
	UPackage* Z_Construct_UPackage__Script_FPSProject();
// End Cross Module References
	void AFPSTestPistol::StaticRegisterNativesAFPSTestPistol()
	{
	}
	UClass* Z_Construct_UClass_AFPSTestPistol_NoRegister()
	{
		return AFPSTestPistol::StaticClass();
	}
	struct Z_Construct_UClass_AFPSTestPistol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSTestPistol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFPSRangeWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSTestPistol_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FPSTestPistol.h" },
		{ "ModuleRelativePath", "FPSTestPistol.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSTestPistol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSTestPistol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSTestPistol_Statics::ClassParams = {
		&AFPSTestPistol::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSTestPistol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSTestPistol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSTestPistol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSTestPistol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSTestPistol, 930483708);
	template<> FPSPROJECT_API UClass* StaticClass<AFPSTestPistol>()
	{
		return AFPSTestPistol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSTestPistol(Z_Construct_UClass_AFPSTestPistol, &AFPSTestPistol::StaticClass, TEXT("/Script/FPSProject"), TEXT("AFPSTestPistol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSTestPistol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
