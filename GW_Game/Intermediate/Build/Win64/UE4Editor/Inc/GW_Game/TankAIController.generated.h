// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GW_GAME_TankAIController_generated_h
#error "TankAIController.generated.h already included, missing '#pragma once' in TankAIController.h"
#endif
#define GW_GAME_TankAIController_generated_h

#define GW_Game_Source_GW_Game_Public_TankAIController_h_17_RPC_WRAPPERS
#define GW_Game_Source_GW_Game_Public_TankAIController_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define GW_Game_Source_GW_Game_Public_TankAIController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankAIController(); \
	friend GW_GAME_API class UClass* Z_Construct_UClass_ATankAIController(); \
public: \
	DECLARE_CLASS(ATankAIController, AAIController, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GW_Game"), NO_API) \
	DECLARE_SERIALIZER(ATankAIController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GW_Game_Source_GW_Game_Public_TankAIController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATankAIController(); \
	friend GW_GAME_API class UClass* Z_Construct_UClass_ATankAIController(); \
public: \
	DECLARE_CLASS(ATankAIController, AAIController, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GW_Game"), NO_API) \
	DECLARE_SERIALIZER(ATankAIController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GW_Game_Source_GW_Game_Public_TankAIController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankAIController(ATankAIController&&); \
	NO_API ATankAIController(const ATankAIController&); \
public:


#define GW_Game_Source_GW_Game_Public_TankAIController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankAIController(ATankAIController&&); \
	NO_API ATankAIController(const ATankAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankAIController)


#define GW_Game_Source_GW_Game_Public_TankAIController_h_17_PRIVATE_PROPERTY_OFFSET
#define GW_Game_Source_GW_Game_Public_TankAIController_h_14_PROLOG
#define GW_Game_Source_GW_Game_Public_TankAIController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GW_Game_Source_GW_Game_Public_TankAIController_h_17_PRIVATE_PROPERTY_OFFSET \
	GW_Game_Source_GW_Game_Public_TankAIController_h_17_RPC_WRAPPERS \
	GW_Game_Source_GW_Game_Public_TankAIController_h_17_INCLASS \
	GW_Game_Source_GW_Game_Public_TankAIController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GW_Game_Source_GW_Game_Public_TankAIController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GW_Game_Source_GW_Game_Public_TankAIController_h_17_PRIVATE_PROPERTY_OFFSET \
	GW_Game_Source_GW_Game_Public_TankAIController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GW_Game_Source_GW_Game_Public_TankAIController_h_17_INCLASS_NO_PURE_DECLS \
	GW_Game_Source_GW_Game_Public_TankAIController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GW_Game_Source_GW_Game_Public_TankAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
