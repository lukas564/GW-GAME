// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTankTurret;
class UTankBarrel;
#ifdef GW_GAME_Assault_generated_h
#error "Assault.generated.h already included, missing '#pragma once' in Assault.h"
#endif
#define GW_GAME_Assault_generated_h

#define GW_Game_Source_GW_Game_Public_Assault_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTurretReference) \
	{ \
		P_GET_OBJECT(UTankTurret,Z_Param_TurretToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTurretReference(Z_Param_TurretToSet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBarrelReference) \
	{ \
		P_GET_OBJECT(UTankBarrel,Z_Param_BarrelToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBarrelReference(Z_Param_BarrelToSet); \
		P_NATIVE_END; \
	}


#define GW_Game_Source_GW_Game_Public_Assault_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTurretReference) \
	{ \
		P_GET_OBJECT(UTankTurret,Z_Param_TurretToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTurretReference(Z_Param_TurretToSet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBarrelReference) \
	{ \
		P_GET_OBJECT(UTankBarrel,Z_Param_BarrelToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBarrelReference(Z_Param_BarrelToSet); \
		P_NATIVE_END; \
	}


#define GW_Game_Source_GW_Game_Public_Assault_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAssault(); \
	friend GW_GAME_API class UClass* Z_Construct_UClass_AAssault(); \
public: \
	DECLARE_CLASS(AAssault, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GW_Game"), NO_API) \
	DECLARE_SERIALIZER(AAssault) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GW_Game_Source_GW_Game_Public_Assault_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAssault(); \
	friend GW_GAME_API class UClass* Z_Construct_UClass_AAssault(); \
public: \
	DECLARE_CLASS(AAssault, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GW_Game"), NO_API) \
	DECLARE_SERIALIZER(AAssault) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GW_Game_Source_GW_Game_Public_Assault_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAssault(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAssault) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAssault); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssault); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAssault(AAssault&&); \
	NO_API AAssault(const AAssault&); \
public:


#define GW_Game_Source_GW_Game_Public_Assault_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAssault(AAssault&&); \
	NO_API AAssault(const AAssault&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAssault); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssault); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAssault)


#define GW_Game_Source_GW_Game_Public_Assault_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LaunchSpeed() { return STRUCT_OFFSET(AAssault, LaunchSpeed); }


#define GW_Game_Source_GW_Game_Public_Assault_h_12_PROLOG
#define GW_Game_Source_GW_Game_Public_Assault_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GW_Game_Source_GW_Game_Public_Assault_h_15_PRIVATE_PROPERTY_OFFSET \
	GW_Game_Source_GW_Game_Public_Assault_h_15_RPC_WRAPPERS \
	GW_Game_Source_GW_Game_Public_Assault_h_15_INCLASS \
	GW_Game_Source_GW_Game_Public_Assault_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GW_Game_Source_GW_Game_Public_Assault_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GW_Game_Source_GW_Game_Public_Assault_h_15_PRIVATE_PROPERTY_OFFSET \
	GW_Game_Source_GW_Game_Public_Assault_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GW_Game_Source_GW_Game_Public_Assault_h_15_INCLASS_NO_PURE_DECLS \
	GW_Game_Source_GW_Game_Public_Assault_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GW_Game_Source_GW_Game_Public_Assault_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
