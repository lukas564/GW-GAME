// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GW_GAME_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define GW_GAME_Projectile_generated_h

#define GW_Game_Source_GW_Game_Public_Projectile_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define GW_Game_Source_GW_Game_Public_Projectile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define GW_Game_Source_GW_Game_Public_Projectile_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend GW_GAME_API class UClass* Z_Construct_UClass_AProjectile(); \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GW_Game"), NO_API) \
	DECLARE_SERIALIZER(AProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GW_Game_Source_GW_Game_Public_Projectile_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend GW_GAME_API class UClass* Z_Construct_UClass_AProjectile(); \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GW_Game"), NO_API) \
	DECLARE_SERIALIZER(AProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GW_Game_Source_GW_Game_Public_Projectile_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public:


#define GW_Game_Source_GW_Game_Public_Projectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile)


#define GW_Game_Source_GW_Game_Public_Projectile_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ExplosionForce() { return STRUCT_OFFSET(AProjectile, ExplosionForce); } \
	FORCEINLINE static uint32 __PPO__DestroyDelay() { return STRUCT_OFFSET(AProjectile, DestroyDelay); } \
	FORCEINLINE static uint32 __PPO__ProjectileDamage() { return STRUCT_OFFSET(AProjectile, ProjectileDamage); }


#define GW_Game_Source_GW_Game_Public_Projectile_h_10_PROLOG
#define GW_Game_Source_GW_Game_Public_Projectile_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GW_Game_Source_GW_Game_Public_Projectile_h_13_PRIVATE_PROPERTY_OFFSET \
	GW_Game_Source_GW_Game_Public_Projectile_h_13_RPC_WRAPPERS \
	GW_Game_Source_GW_Game_Public_Projectile_h_13_INCLASS \
	GW_Game_Source_GW_Game_Public_Projectile_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GW_Game_Source_GW_Game_Public_Projectile_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GW_Game_Source_GW_Game_Public_Projectile_h_13_PRIVATE_PROPERTY_OFFSET \
	GW_Game_Source_GW_Game_Public_Projectile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GW_Game_Source_GW_Game_Public_Projectile_h_13_INCLASS_NO_PURE_DECLS \
	GW_Game_Source_GW_Game_Public_Projectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GW_Game_Source_GW_Game_Public_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
