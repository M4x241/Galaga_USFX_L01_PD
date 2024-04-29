// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/BConstructorEscenario.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBConstructorEscenario() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UBConstructorEscenario_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UBConstructorEscenario();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void UBConstructorEscenario::StaticRegisterNativesUBConstructorEscenario()
	{
	}
	UClass* Z_Construct_UClass_UBConstructorEscenario_NoRegister()
	{
		return UBConstructorEscenario::StaticClass();
	}
	struct Z_Construct_UClass_UBConstructorEscenario_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBConstructorEscenario_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBConstructorEscenario_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "BConstructorEscenario.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBConstructorEscenario_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBConstructorEscenario>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBConstructorEscenario_Statics::ClassParams = {
		&UBConstructorEscenario::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBConstructorEscenario_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBConstructorEscenario_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBConstructorEscenario()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBConstructorEscenario_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBConstructorEscenario, 3862260846);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UBConstructorEscenario>()
	{
		return UBConstructorEscenario::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBConstructorEscenario(Z_Construct_UClass_UBConstructorEscenario, &UBConstructorEscenario::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("UBConstructorEscenario"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBConstructorEscenario);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
