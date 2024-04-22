// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/FabricaEnemiga.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaEnemiga() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFabricaEnemiga_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFabricaEnemiga();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFabricaMxCorporation();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AFabricaEnemiga::StaticRegisterNativesAFabricaEnemiga()
	{
	}
	UClass* Z_Construct_UClass_AFabricaEnemiga_NoRegister()
	{
		return AFabricaEnemiga::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaEnemiga_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaEnemiga_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaMxCorporation,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaEnemiga_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FabricaEnemiga.h" },
		{ "ModuleRelativePath", "FabricaEnemiga.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaEnemiga_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaEnemiga>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaEnemiga_Statics::ClassParams = {
		&AFabricaEnemiga::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaEnemiga_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaEnemiga_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaEnemiga()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaEnemiga_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaEnemiga, 1014133168);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AFabricaEnemiga>()
	{
		return AFabricaEnemiga::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaEnemiga(Z_Construct_UClass_AFabricaEnemiga, &AFabricaEnemiga::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AFabricaEnemiga"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaEnemiga);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
