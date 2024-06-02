// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/FormacionDiamante.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFormacionDiamante() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFormacionDiamante_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFormacionDiamante();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UIEstrategiasScuadras_NoRegister();
// End Cross Module References
	void AFormacionDiamante::StaticRegisterNativesAFormacionDiamante()
	{
	}
	UClass* Z_Construct_UClass_AFormacionDiamante_NoRegister()
	{
		return AFormacionDiamante::StaticClass();
	}
	struct Z_Construct_UClass_AFormacionDiamante_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFormacionDiamante_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFormacionDiamante_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FormacionDiamante.h" },
		{ "ModuleRelativePath", "FormacionDiamante.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFormacionDiamante_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIEstrategiasScuadras_NoRegister, (int32)VTABLE_OFFSET(AFormacionDiamante, IIEstrategiasScuadras), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFormacionDiamante_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFormacionDiamante>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFormacionDiamante_Statics::ClassParams = {
		&AFormacionDiamante::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFormacionDiamante_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFormacionDiamante_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFormacionDiamante()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFormacionDiamante_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFormacionDiamante, 3191854581);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AFormacionDiamante>()
	{
		return AFormacionDiamante::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFormacionDiamante(Z_Construct_UClass_AFormacionDiamante, &AFormacionDiamante::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AFormacionDiamante"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFormacionDiamante);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
