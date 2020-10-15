// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TransitSimulator/TransitSimulatorGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransitSimulatorGameModeBase() {}
// Cross Module References
	TRANSITSIMULATOR_API UClass* Z_Construct_UClass_ATransitSimulatorGameModeBase_NoRegister();
	TRANSITSIMULATOR_API UClass* Z_Construct_UClass_ATransitSimulatorGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TransitSimulator();
// End Cross Module References
	void ATransitSimulatorGameModeBase::StaticRegisterNativesATransitSimulatorGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATransitSimulatorGameModeBase_NoRegister()
	{
		return ATransitSimulatorGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATransitSimulatorGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATransitSimulatorGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TransitSimulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransitSimulatorGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TransitSimulatorGameModeBase.h" },
		{ "ModuleRelativePath", "TransitSimulatorGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATransitSimulatorGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATransitSimulatorGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATransitSimulatorGameModeBase_Statics::ClassParams = {
		&ATransitSimulatorGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATransitSimulatorGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATransitSimulatorGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATransitSimulatorGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATransitSimulatorGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATransitSimulatorGameModeBase, 2427305475);
	template<> TRANSITSIMULATOR_API UClass* StaticClass<ATransitSimulatorGameModeBase>()
	{
		return ATransitSimulatorGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATransitSimulatorGameModeBase(Z_Construct_UClass_ATransitSimulatorGameModeBase, &ATransitSimulatorGameModeBase::StaticClass, TEXT("/Script/TransitSimulator"), TEXT("ATransitSimulatorGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATransitSimulatorGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
