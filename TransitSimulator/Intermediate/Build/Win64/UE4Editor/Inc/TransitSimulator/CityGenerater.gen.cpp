// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TransitSimulator/CityGenerater.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCityGenerater() {}
// Cross Module References
	TRANSITSIMULATOR_API UClass* Z_Construct_UClass_ACityGenerater_NoRegister();
	TRANSITSIMULATOR_API UClass* Z_Construct_UClass_ACityGenerater();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TransitSimulator();
// End Cross Module References
	void ACityGenerater::StaticRegisterNativesACityGenerater()
	{
	}
	UClass* Z_Construct_UClass_ACityGenerater_NoRegister()
	{
		return ACityGenerater::StaticClass();
	}
	struct Z_Construct_UClass_ACityGenerater_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACityGenerater_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TransitSimulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACityGenerater_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CityGenerater.h" },
		{ "ModuleRelativePath", "CityGenerater.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACityGenerater_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACityGenerater>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACityGenerater_Statics::ClassParams = {
		&ACityGenerater::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACityGenerater_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACityGenerater_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACityGenerater()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACityGenerater_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACityGenerater, 3183508457);
	template<> TRANSITSIMULATOR_API UClass* StaticClass<ACityGenerater>()
	{
		return ACityGenerater::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACityGenerater(Z_Construct_UClass_ACityGenerater, &ACityGenerater::StaticClass, TEXT("/Script/TransitSimulator"), TEXT("ACityGenerater"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACityGenerater);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
