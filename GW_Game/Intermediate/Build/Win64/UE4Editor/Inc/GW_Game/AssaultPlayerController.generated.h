// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTankAimingComponent;
#ifdef GW_GAME_AssaultPlayerController_generated_h
#error "AssaultPlayerController.generated.h already included, missing '#pragma once' in AssaultPlayerController.h"
#endif
#define GW_GAME_AssaultPlayerController_generated_h

#define GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_15_RPC_WRAPPERS
#define GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_15_EVENT_PARMS \
	struct AssaultPlayerController_eventFoundAimingComponent_Parms \
	{ \
		UTankAimingComponent* AimRef; \
	};


#define GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_15_CALLBACK_WRAPPERS
#define GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAssaultPlayerController(); \
	friend GW_GAME_API class UClass* Z_Construct_UClass_AAssaultPlayerController(); \
public: \
	DECLARE_CLASS(AAssaultPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/GW_Game"), NO_API) \
	DECLARE_SERIALIZER(AAssaultPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAssaultPlayerController(); \
	friend GW_GAME_API class UClass* Z_Construct_UClass_AAssaultPlayerController(); \
public: \
	DECLARE_CLASS(AAssaultPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/GW_Game"), NO_API) \
	DECLARE_SERIALIZER(AAssaultPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAssaultPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAssaultPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAssaultPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssaultPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAssaultPlayerController(AAssaultPlayerController&&); \
	NO_API AAssaultPlayerController(const AAssaultPlayerController&); \
public:


#define GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAssaultPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAssaultPlayerController(AAssaultPlayerController&&); \
	NO_API AAssaultPlayerController(const AAssaultPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAssaultPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssaultPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAssaultPlayerController)


#define GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CrossHairXLocation() { return STRUCT_OFFSET(AAssaultPlayerController, CrossHairXLocation); } \
	FORCEINLINE static uint32 __PPO__CrossHairYLocation() { return STRUCT_OFFSET(AAssaultPlayerController, CrossHairYLocation); } \
	FORCEINLINE static uint32 __PPO__LineTraceRange() { return STRUCT_OFFSET(AAssaultPlayerController, LineTraceRange); }


#define GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_12_PROLOG \
	GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_15_EVENT_PARMS


#define GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_15_RPC_WRAPPERS \
	GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_15_CALLBACK_WRAPPERS \
	GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_15_INCLASS \
	GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_15_CALLBACK_WRAPPERS \
	GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	GW_Game_Source_GW_Game_Public_AssaultPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GW_Game_Source_GW_Game_Public_AssaultPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
