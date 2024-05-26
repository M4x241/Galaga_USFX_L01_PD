// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/EstadoConfundido.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoConfundido() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstadoConfundido_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstadoConfundido();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UIEstadoPawn_NoRegister();
// End Cross Module References
	void AEstadoConfundido::StaticRegisterNativesAEstadoConfundido()
	{
	}
	UClass* Z_Construct_UClass_AEstadoConfundido_NoRegister()
	{
		return AEstadoConfundido::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoConfundido_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoConfundido_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoConfundido_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoConfundido.h" },
		{ "ModuleRelativePath", "EstadoConfundido.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoConfundido_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIEstadoPawn_NoRegister, (int32)VTABLE_OFFSET(AEstadoConfundido, IIEstadoPawn), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoConfundido_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoConfundido>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoConfundido_Statics::ClassParams = {
		&AEstadoConfundido::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstadoConfundido_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoConfundido_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoConfundido()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoConfundido_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoConfundido, 1569071464);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AEstadoConfundido>()
	{
		return AEstadoConfundido::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoConfundido(Z_Construct_UClass_AEstadoConfundido, &AEstadoConfundido::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AEstadoConfundido"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoConfundido);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
