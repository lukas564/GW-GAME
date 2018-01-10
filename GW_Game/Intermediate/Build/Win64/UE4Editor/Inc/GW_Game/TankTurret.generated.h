// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GW_GAME_TankTurret_generated_h
#error "TankTurret.generated.h already included, missing '#pragma once' in TankTurret.h"
#endif
#define GW_GAME_TankTurret_generated_h

#define GW_Game_Source_GW_Game_Public_TankTurret_h_15_RPC_WRAPPERS
#define GW_Game_Source_GW_Game_Public_TankTurret_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define GW_Game_Source_GW_Game_Public_TankTurret_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankTurret(); \
	friend GW_GAME_API class UClass* Z_Construct_UClass_UTankTurret(); \
public: \
	DECLARE_CLASS(UTankTurret, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GW_Game"), NO_API) \
	DECLARE_SERIALIZER(UTankTurret) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GW_Game_Source_GW_Game_Public_TankTurret_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTankTurret(); \
	friend GW_GAME_API class UClass* Z_Construct_UClass_UTankTurret(); \
public: \
	DECLARE_CLASS(UTankTurret, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GW_Game"), NO_API) \
	DECLARE_SERIALIZER(UTankTurret) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GW_Game_Source_GW_Game_Public_TankTurret_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankTurret(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankTurret) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankTurret); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankTurret); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankTurret(UTankTurret&&); \
	NO_API UTankTurret(const UTankTurret&); \
public:


#define GW_Game_Source_GW_Game_Public_TankTurret_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankTurret(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankTurret(UTankTurret&&); \
	NO_API UTankTurret(const UTankTurret&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankTurret); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankTurret); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankTurret)


#define GW_Game_Source_GW_Game_Public_TankTurret_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxDegreesPerSecond() { return STRUCT_OFFSET(UTankTurret, MaxDegreesPerSecond); }


#define GW_Game_Source_GW_Game_Public_TankTurret_h_12_PROLOG
#define GW_Game_Source_GW_Game_Public_TankTurret_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GW_Game_Source_GW_Game_Public_TankTurret_h_15_PRIVATE_PROPERTY_OFFSET \
	GW_Game_Source_GW_Game_Public_TankTurret_h_15_RPC_WRAPPERS \
	GW_Game_Source_GW_Game_Public_TankTurret_h_15_INCLASS \
	GW_Game_Source_GW_Game_Public_TankTurret_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GW_Game_Source_GW_Game_Public_TankTurret_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GW_Game_Source_GW_Game_Public_TankTurret_h_15_PRIVATE_PROPERTY_OFFSET \
	GW_Game_Source_GW_Game_Public_TankTurret_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GW_Game_Source_GW_Game_Public_TankTurret_h_15_INCLASS_NO_PURE_DECLS \
	GW_Game_Source_GW_Game_Public_TankTurret_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GW_Game_Source_GW_Game_Public_TankTurret_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
