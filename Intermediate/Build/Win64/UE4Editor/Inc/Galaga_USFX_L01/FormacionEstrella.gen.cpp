// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/FormacionEstrella.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFormacionEstrella() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFormacionEstrella_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFormacionEstrella();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UIEstrategiasScuadras_NoRegister();
// End Cross Module References
	void AFormacionEstrella::StaticRegisterNativesAFormacionEstrella()
	{
	}
	UClass* Z_Construct_UClass_AFormacionEstrella_NoRegister()
	{
		return AFormacionEstrella::StaticClass();
	}
	struct Z_Construct_UClass_AFormacionEstrella_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFormacionEstrella_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFormacionEstrella_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FormacionEstrella.h" },
		{ "ModuleRelativePath", "FormacionEstrella.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFormacionEstrella_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIEstrategiasScuadras_NoRegister, (int32)VTABLE_OFFSET(AFormacionEstrella, IIEstrategiasScuadras), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFormacionEstrella_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFormacionEstrella>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFormacionEstrella_Statics::ClassParams = {
		&AFormacionEstrella::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFormacionEstrella_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFormacionEstrella_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFormacionEstrella()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFormacionEstrella_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFormacionEstrella, 3754701584);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AFormacionEstrella>()
	{
		return AFormacionEstrella::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFormacionEstrella(Z_Construct_UClass_AFormacionEstrella, &AFormacionEstrella::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AFormacionEstrella"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFormacionEstrella);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
