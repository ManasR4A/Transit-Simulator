// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRANSITSIMULATOR_UserController_generated_h
#error "UserController.generated.h already included, missing '#pragma once' in UserController.h"
#endif
#define TRANSITSIMULATOR_UserController_generated_h

#define TransitSimulator_Source_TransitSimulator_UserController_h_17_SPARSE_DATA
#define TransitSimulator_Source_TransitSimulator_UserController_h_17_RPC_WRAPPERS
#define TransitSimulator_Source_TransitSimulator_UserController_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define TransitSimulator_Source_TransitSimulator_UserController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUserController(); \
	friend struct Z_Construct_UClass_AUserController_Statics; \
public: \
	DECLARE_CLASS(AUserController, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TransitSimulator"), NO_API) \
	DECLARE_SERIALIZER(AUserController)


#define TransitSimulator_Source_TransitSimulator_UserController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAUserController(); \
	friend struct Z_Construct_UClass_AUserController_Statics; \
public: \
	DECLARE_CLASS(AUserController, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TransitSimulator"), NO_API) \
	DECLARE_SERIALIZER(AUserController)


#define TransitSimulator_Source_TransitSimulator_UserController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUserController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUserController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUserController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUserController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUserController(AUserController&&); \
	NO_API AUserController(const AUserController&); \
public:


#define TransitSimulator_Source_TransitSimulator_UserController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUserController(AUserController&&); \
	NO_API AUserController(const AUserController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUserController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUserController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUserController)


#define TransitSimulator_Source_TransitSimulator_UserController_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mesh() { return STRUCT_OFFSET(AUserController, mesh); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AUserController, Camera); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AUserController, SpringArm); } \
	FORCEINLINE static uint32 __PPO__MovementController() { return STRUCT_OFFSET(AUserController, MovementController); }


#define TransitSimulator_Source_TransitSimulator_UserController_h_14_PROLOG
#define TransitSimulator_Source_TransitSimulator_UserController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TransitSimulator_Source_TransitSimulator_UserController_h_17_PRIVATE_PROPERTY_OFFSET \
	TransitSimulator_Source_TransitSimulator_UserController_h_17_SPARSE_DATA \
	TransitSimulator_Source_TransitSimulator_UserController_h_17_RPC_WRAPPERS \
	TransitSimulator_Source_TransitSimulator_UserController_h_17_INCLASS \
	TransitSimulator_Source_TransitSimulator_UserController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TransitSimulator_Source_TransitSimulator_UserController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TransitSimulator_Source_TransitSimulator_UserController_h_17_PRIVATE_PROPERTY_OFFSET \
	TransitSimulator_Source_TransitSimulator_UserController_h_17_SPARSE_DATA \
	TransitSimulator_Source_TransitSimulator_UserController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TransitSimulator_Source_TransitSimulator_UserController_h_17_INCLASS_NO_PURE_DECLS \
	TransitSimulator_Source_TransitSimulator_UserController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRANSITSIMULATOR_API UClass* StaticClass<class AUserController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TransitSimulator_Source_TransitSimulator_UserController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
