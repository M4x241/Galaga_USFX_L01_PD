// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Foton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoton() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFoton_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFoton();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AFoton::StaticRegisterNativesAFoton()
	{
	}
	UClass* Z_Construct_UClass_AFoton_NoRegister()
	{
		return AFoton::StaticClass();
	}
	struct Z_Construct_UClass_AFoton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFoton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Foton.h" },
		{ "ModuleRelativePath", "Foton.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFoton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFoton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFoton_Statics::ClassParams = {
		&AFoton::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFoton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFoton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFoton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFoton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFoton, 3729856871);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AFoton>()
	{
		return AFoton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFoton(Z_Construct_UClass_AFoton, &AFoton::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AFoton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFoton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
