// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Stage2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStage2() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AStage2_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AStage2();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UBConstructorEscenario_NoRegister();
// End Cross Module References
	void AStage2::StaticRegisterNativesAStage2()
	{
	}
	UClass* Z_Construct_UClass_AStage2_NoRegister()
	{
		return AStage2::StaticClass();
	}
	struct Z_Construct_UClass_AStage2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStage2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStage2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Stage2.h" },
		{ "ModuleRelativePath", "Stage2.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStage2_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBConstructorEscenario_NoRegister, (int32)VTABLE_OFFSET(AStage2, IBConstructorEscenario), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStage2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStage2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStage2_Statics::ClassParams = {
		&AStage2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AStage2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStage2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStage2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStage2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStage2, 1534110321);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AStage2>()
	{
		return AStage2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStage2(Z_Construct_UClass_AStage2, &AStage2::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AStage2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStage2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
