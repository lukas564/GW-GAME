// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GW_GAME_Heavy_generated_h
#error "Heavy.generated.h already included, missing '#pragma once' in Heavy.h"
#endif
#define GW_GAME_Heavy_generated_h

#define GW_Game_Source_GW_Game_Public_Heavy_h_12_RPC_WRAPPERS
#define GW_Game_Source_GW_Game_Public_Heavy_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GW_Game_Source_GW_Game_Public_Heavy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeavy(); \
	friend GW_GAME_API class UClass* Z_Construct_UClass_AHeavy(); \
public: \
	DECLARE_CLASS(AHeavy, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GW_Game"), NO_API) \
	DECLARE_SERIALIZER(AHeavy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GW_Game_Source_GW_Game_Public_Heavy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHeavy(); \
	friend GW_GAME_API class UClass* Z_Construct_UClass_AHeavy(); \
public: \
	DECLARE_CLASS(AHeavy, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GW_Game"), NO_API) \
	DECLARE_SERIALIZER(AHeavy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GW_Game_Source_GW_Game_Public_Heavy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHeavy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeavy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeavy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeavy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeavy(AHeavy&&); \
	NO_API AHeavy(const AHeavy&); \
public:


#define GW_Game_Source_GW_Game_Public_Heavy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeavy(AHeavy&&); \
	NO_API AHeavy(const AHeavy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeavy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeavy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeavy)


#define GW_Game_Source_GW_Game_Public_Heavy_h_12_PRIVATE_PROPERTY_OFFSET
#define GW_Game_Source_GW_Game_Public_Heavy_h_9_PROLOG
#define GW_Game_Source_GW_Game_Public_Heavy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GW_Game_Source_GW_Game_Public_Heavy_h_12_PRIVATE_PROPERTY_OFFSET \
	GW_Game_Source_GW_Game_Public_Heavy_h_12_RPC_WRAPPERS \
	GW_Game_Source_GW_Game_Public_Heavy_h_12_INCLASS \
	GW_Game_Source_GW_Game_Public_Heavy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GW_Game_Source_GW_Game_Public_Heavy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GW_Game_Source_GW_Game_Public_Heavy_h_12_PRIVATE_PROPERTY_OFFSET \
	GW_Game_Source_GW_Game_Public_Heavy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GW_Game_Source_GW_Game_Public_Heavy_h_12_INCLASS_NO_PURE_DECLS \
	GW_Game_Source_GW_Game_Public_Heavy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GW_Game_Source_GW_Game_Public_Heavy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
