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
#ifdef GW_GAME_MovementPoint_generated_h
#error "MovementPoint.generated.h already included, missing '#pragma once' in MovementPoint.h"
#endif
#define GW_GAME_MovementPoint_generated_h

#define GW_Game_Source_GW_Game_Public_MovementPoint_h_15_RPC_WRAPPERS \
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
	} \
 \
	DECLARE_FUNCTION(execSetThrottle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throttle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetThrottle(Z_Param_Throttle); \
		P_NATIVE_END; \
	}


#define GW_Game_Source_GW_Game_Public_MovementPoint_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
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
	} \
 \
	DECLARE_FUNCTION(execSetThrottle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throttle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetThrottle(Z_Param_Throttle); \
		P_NATIVE_END; \
	}


#define GW_Game_Source_GW_Game_Public_MovementPoint_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovementPoint(); \
	friend GW_GAME_API class UClass* Z_Construct_UClass_UMovementPoint(); \
public: \
	DECLARE_CLASS(UMovementPoint, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GW_Game"), NO_API) \
	DECLARE_SERIALIZER(UMovementPoint) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GW_Game_Source_GW_Game_Public_MovementPoint_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMovementPoint(); \
	friend GW_GAME_API class UClass* Z_Construct_UClass_UMovementPoint(); \
public: \
	DECLARE_CLASS(UMovementPoint, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GW_Game"), NO_API) \
	DECLARE_SERIALIZER(UMovementPoint) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GW_Game_Source_GW_Game_Public_MovementPoint_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovementPoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovementPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovementPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovementPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovementPoint(UMovementPoint&&); \
	NO_API UMovementPoint(const UMovementPoint&); \
public:


#define GW_Game_Source_GW_Game_Public_MovementPoint_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovementPoint(UMovementPoint&&); \
	NO_API UMovementPoint(const UMovementPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovementPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovementPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovementPoint)


#define GW_Game_Source_GW_Game_Public_MovementPoint_h_15_PRIVATE_PROPERTY_OFFSET
#define GW_Game_Source_GW_Game_Public_MovementPoint_h_12_PROLOG
#define GW_Game_Source_GW_Game_Public_MovementPoint_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GW_Game_Source_GW_Game_Public_MovementPoint_h_15_PRIVATE_PROPERTY_OFFSET \
	GW_Game_Source_GW_Game_Public_MovementPoint_h_15_RPC_WRAPPERS \
	GW_Game_Source_GW_Game_Public_MovementPoint_h_15_INCLASS \
	GW_Game_Source_GW_Game_Public_MovementPoint_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GW_Game_Source_GW_Game_Public_MovementPoint_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GW_Game_Source_GW_Game_Public_MovementPoint_h_15_PRIVATE_PROPERTY_OFFSET \
	GW_Game_Source_GW_Game_Public_MovementPoint_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GW_Game_Source_GW_Game_Public_MovementPoint_h_15_INCLASS_NO_PURE_DECLS \
	GW_Game_Source_GW_Game_Public_MovementPoint_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GW_Game_Source_GW_Game_Public_MovementPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
