// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Stage1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStage1() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AStage1_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AStage1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UBConstructorEscenario_NoRegister();
// End Cross Module References
	void AStage1::StaticRegisterNativesAStage1()
	{
	}
	UClass* Z_Construct_UClass_AStage1_NoRegister()
	{
		return AStage1::StaticClass();
	}
	struct Z_Construct_UClass_AStage1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStage1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStage1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Stage1.h" },
		{ "ModuleRelativePath", "Stage1.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStage1_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBConstructorEscenario_NoRegister, (int32)VTABLE_OFFSET(AStage1, IBConstructorEscenario), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStage1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStage1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStage1_Statics::ClassParams = {
		&AStage1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStage1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStage1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStage1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStage1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStage1, 3571993595);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AStage1>()
	{
		return AStage1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStage1(Z_Construct_UClass_AStage1, &AStage1::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AStage1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStage1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
