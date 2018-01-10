// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GW_GAME_TankBarrel_generated_h
#error "TankBarrel.generated.h already included, missing '#pragma once' in TankBarrel.h"
#endif
#define GW_GAME_TankBarrel_generated_h

#define GW_Game_Source_GW_Game_Public_TankBarrel_h_15_RPC_WRAPPERS
#define GW_Game_Source_GW_Game_Public_TankBarrel_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define GW_Game_Source_GW_Game_Public_TankBarrel_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankBarrel(); \
	friend GW_GAME_API class UClass* Z_Construct_UClass_UTankBarrel(); \
public: \
	DECLARE_CLASS(UTankBarrel, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GW_Game"), NO_API) \
	DECLARE_SERIALIZER(UTankBarrel) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GW_Game_Source_GW_Game_Public_TankBarrel_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTankBarrel(); \
	friend GW_GAME_API class UClass* Z_Construct_UClass_UTankBarrel(); \
public: \
	DECLARE_CLASS(UTankBarrel, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GW_Game"), NO_API) \
	DECLARE_SERIALIZER(UTankBarrel) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GW_Game_Source_GW_Game_Public_TankBarrel_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankBarrel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankBarrel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankBarrel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankBarrel(UTankBarrel&&); \
	NO_API UTankBarrel(const UTankBarrel&); \
public:


#define GW_Game_Source_GW_Game_Public_TankBarrel_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankBarrel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankBarrel(UTankBarrel&&); \
	NO_API UTankBarrel(const UTankBarrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankBarrel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankBarrel)


#define GW_Game_Source_GW_Game_Public_TankBarrel_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxDegreesPerSecond() { return STRUCT_OFFSET(UTankBarrel, MaxDegreesPerSecond); } \
	FORCEINLINE static uint32 __PPO__MaxElevationDegrees() { return STRUCT_OFFSET(UTankBarrel, MaxElevationDegrees); } \
	FORCEINLINE static uint32 __PPO__MinElevationDegrees() { return STRUCT_OFFSET(UTankBarrel, MinElevationDegrees); }


#define GW_Game_Source_GW_Game_Public_TankBarrel_h_12_PROLOG
#define GW_Game_Source_GW_Game_Public_TankBarrel_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GW_Game_Source_GW_Game_Public_TankBarrel_h_15_PRIVATE_PROPERTY_OFFSET \
	GW_Game_Source_GW_Game_Public_TankBarrel_h_15_RPC_WRAPPERS \
	GW_Game_Source_GW_Game_Public_TankBarrel_h_15_INCLASS \
	GW_Game_Source_GW_Game_Public_TankBarrel_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GW_Game_Source_GW_Game_Public_TankBarrel_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GW_Game_Source_GW_Game_Public_TankBarrel_h_15_PRIVATE_PROPERTY_OFFSET \
	GW_Game_Source_GW_Game_Public_TankBarrel_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GW_Game_Source_GW_Game_Public_TankBarrel_h_15_INCLASS_NO_PURE_DECLS \
	GW_Game_Source_GW_Game_Public_TankBarrel_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GW_Game_Source_GW_Game_Public_TankBarrel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
