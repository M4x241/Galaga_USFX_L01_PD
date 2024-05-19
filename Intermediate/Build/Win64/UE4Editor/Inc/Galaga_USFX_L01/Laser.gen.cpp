// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Laser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaser() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ALaser_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ALaser();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ALaser::StaticRegisterNativesALaser()
	{
	}
	UClass* Z_Construct_UClass_ALaser_NoRegister()
	{
		return ALaser::StaticClass();
	}
	struct Z_Construct_UClass_ALaser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALaser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaser_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Laser.h" },
		{ "ModuleRelativePath", "Laser.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALaser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALaser_Statics::ClassParams = {
		&ALaser::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALaser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALaser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALaser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALaser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALaser, 2347008116);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ALaser>()
	{
		return ALaser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALaser(Z_Construct_UClass_ALaser, &ALaser::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ALaser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALaser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
