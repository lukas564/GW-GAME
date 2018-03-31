// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovementPoint;
#ifdef GW_GAME_TankMovementComponent_generated_h
#error "TankMovementComponent.generated.h already included, missing '#pragma once' in TankMovementComponent.h"
#endif
#define GW_GAME_TankMovementComponent_generated_h

#define GW_Game_Source_GW_Game_Public_TankMovementComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIntendTurnRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->IntendTurnRight(Z_Param_Throw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntendMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->IntendMoveForward(Z_Param_Throw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialise) \
	{ \
		P_GET_OBJECT(UMovementPoint,Z_Param_LeftPointToSet); \
		P_GET_OBJECT(UMovementPoint,Z_Param_RightPointToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Initialise(Z_Param_LeftPointToSet,Z_Param_RightPointToSet); \
		P_NATIVE_END; \
	}


#define GW_Game_Source_GW_Game_Public_TankMovementComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIntendTurnRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->IntendTurnRight(Z_Param_Throw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntendMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->IntendMoveForward(Z_Param_Throw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialise) \
	{ \
		P_GET_OBJECT(UMovementPoint,Z_Param_LeftPointToSet); \
		P_GET_OBJECT(UMovementPoint,Z_Param_RightPointToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Initialise(Z_Param_LeftPointToSet,Z_Param_RightPointToSet); \
		P_NATIVE_END; \
	}


#define GW_Game_Source_GW_Game_Public_TankMovementComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankMovementComponent(); \
	friend GW_GAME_API class UClass* Z_Construct_UClass_UTankMovementComponent(); \
public: \
	DECLARE_CLASS(UTankMovementComponent, UNavMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/GW_Game"), NO_API) \
	DECLARE_SERIALIZER(UTankMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GW_Game_Source_GW_Game_Public_TankMovementComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUTankMovementComponent(); \
	friend GW_GAME_API class UClass* Z_Construct_UClass_UTankMovementComponent(); \
public: \
	DECLARE_CLASS(UTankMovementComponent, UNavMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/GW_Game"), NO_API) \
	DECLARE_SERIALIZER(UTankMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GW_Game_Source_GW_Game_Public_TankMovementComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankMovementComponent(UTankMovementComponent&&); \
	NO_API UTankMovementComponent(const UTankMovementComponent&); \
public:


#define GW_Game_Source_GW_Game_Public_TankMovementComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankMovementComponent(UTankMovementComponent&&); \
	NO_API UTankMovementComponent(const UTankMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankMovementComponent)


#define GW_Game_Source_GW_Game_Public_TankMovementComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define GW_Game_Source_GW_Game_Public_TankMovementComponent_h_10_PROLOG
#define GW_Game_Source_GW_Game_Public_TankMovementComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GW_Game_Source_GW_Game_Public_TankMovementComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	GW_Game_Source_GW_Game_Public_TankMovementComponent_h_13_RPC_WRAPPERS \
	GW_Game_Source_GW_Game_Public_TankMovementComponent_h_13_INCLASS \
	GW_Game_Source_GW_Game_Public_TankMovementComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GW_Game_Source_GW_Game_Public_TankMovementComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GW_Game_Source_GW_Game_Public_TankMovementComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	GW_Game_Source_GW_Game_Public_TankMovementComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GW_Game_Source_GW_Game_Public_TankMovementComponent_h_13_INCLASS_NO_PURE_DECLS \
	GW_Game_Source_GW_Game_Public_TankMovementComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GW_Game_Source_GW_Game_Public_TankMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
