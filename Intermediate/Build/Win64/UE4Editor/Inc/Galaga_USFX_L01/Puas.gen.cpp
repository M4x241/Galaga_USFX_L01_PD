// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Puas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuas() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_APuas_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_APuas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void APuas::StaticRegisterNativesAPuas()
	{
	}
	UClass* Z_Construct_UClass_APuas_NoRegister()
	{
		return APuas::StaticClass();
	}
	struct Z_Construct_UClass_APuas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Puas.h" },
		{ "ModuleRelativePath", "Puas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuas_Statics::ClassParams = {
		&APuas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APuas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuas, 2735868760);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<APuas>()
	{
		return APuas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuas(Z_Construct_UClass_APuas, &APuas::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("APuas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
