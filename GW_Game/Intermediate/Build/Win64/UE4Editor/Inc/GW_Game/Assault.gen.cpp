// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Assault.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssault() {}
// Cross Module References
	GW_GAME_API UClass* Z_Construct_UClass_AAssault_NoRegister();
	GW_GAME_API UClass* Z_Construct_UClass_AAssault();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GW_Game();
	GW_GAME_API UFunction* Z_Construct_UFunction_AAssault_Cooldown();
	GW_GAME_API UFunction* Z_Construct_UFunction_AAssault_Fire();
	GW_GAME_API UFunction* Z_Construct_UFunction_AAssault_SetBarrelReference();
	GW_GAME_API UClass* Z_Construct_UClass_UTankBarrel_NoRegister();
	GW_GAME_API UFunction* Z_Construct_UFunction_AAssault_SetTurretReference();
	GW_GAME_API UClass* Z_Construct_UClass_UTankTurret_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GW_GAME_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	GW_GAME_API UClass* Z_Construct_UClass_UTankMovementComponent_NoRegister();
// End Cross Module References
	void AAssault::StaticRegisterNativesAAssault()
	{
		UClass* Class = AAssault::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Cooldown", (Native)&AAssault::execCooldown },
			{ "Fire", (Native)&AAssault::execFire },
			{ "SetBarrelReference", (Native)&AAssault::execSetBarrelReference },
			{ "SetTurretReference", (Native)&AAssault::execSetTurretReference },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AAssault_Cooldown()
	{
		struct Assault_eventCooldown_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Assault_eventCooldown_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Assault_eventCooldown_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Ability" },
				{ "ModuleRelativePath", "Public/Assault.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssault, "Cooldown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Assault_eventCooldown_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAssault_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Firing" },
				{ "ModuleRelativePath", "Public/Assault.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssault, "Fire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAssault_SetBarrelReference()
	{
		struct Assault_eventSetBarrelReference_Parms
		{
			UTankBarrel* BarrelToSet;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarrelToSet_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarrelToSet = { UE4CodeGen_Private::EPropertyClass::Object, "BarrelToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Assault_eventSetBarrelReference_Parms, BarrelToSet), Z_Construct_UClass_UTankBarrel_NoRegister, METADATA_PARAMS(NewProp_BarrelToSet_MetaData, ARRAY_COUNT(NewProp_BarrelToSet_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BarrelToSet,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/Assault.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssault, "SetBarrelReference", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Assault_eventSetBarrelReference_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAssault_SetTurretReference()
	{
		struct Assault_eventSetTurretReference_Parms
		{
			UTankTurret* TurretToSet;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurretToSet_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurretToSet = { UE4CodeGen_Private::EPropertyClass::Object, "TurretToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Assault_eventSetTurretReference_Parms, TurretToSet), Z_Construct_UClass_UTankTurret_NoRegister, METADATA_PARAMS(NewProp_TurretToSet_MetaData, ARRAY_COUNT(NewProp_TurretToSet_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TurretToSet,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/Assault.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssault, "SetTurretReference", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Assault_eventSetTurretReference_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAssault_NoRegister()
	{
		return AAssault::StaticClass();
	}
	UClass* Z_Construct_UClass_AAssault()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_GW_Game,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AAssault_Cooldown, "Cooldown" }, // 1231892658
				{ &Z_Construct_UFunction_AAssault_Fire, "Fire" }, // 3123087607
				{ &Z_Construct_UFunction_AAssault_SetBarrelReference, "SetBarrelReference" }, // 3856352282
				{ &Z_Construct_UFunction_AAssault_SetTurretReference, "SetTurretReference" }, // 442334389
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Assault.h" },
				{ "ModuleRelativePath", "Public/Assault.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownTimeInSeconds_MetaData[] = {
				{ "Category", "Ability" },
				{ "ModuleRelativePath", "Public/Assault.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownTimeInSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "CooldownTimeInSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AAssault, CooldownTimeInSeconds), METADATA_PARAMS(NewProp_CooldownTimeInSeconds_MetaData, ARRAY_COUNT(NewProp_CooldownTimeInSeconds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadTimeInSeconds_MetaData[] = {
				{ "Category", "Firing" },
				{ "ModuleRelativePath", "Public/Assault.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadTimeInSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "ReloadTimeInSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AAssault, ReloadTimeInSeconds), METADATA_PARAMS(NewProp_ReloadTimeInSeconds_MetaData, ARRAY_COUNT(NewProp_ReloadTimeInSeconds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchSpeed_MetaData[] = {
				{ "Category", "Firing" },
				{ "ModuleRelativePath", "Public/Assault.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "LaunchSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AAssault, LaunchSpeed), METADATA_PARAMS(NewProp_LaunchSpeed_MetaData, ARRAY_COUNT(NewProp_LaunchSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileBlueprint_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/Assault.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileBlueprint = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000010001, 1, nullptr, STRUCT_OFFSET(AAssault, ProjectileBlueprint), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ProjectileBlueprint_MetaData, ARRAY_COUNT(NewProp_ProjectileBlueprint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankMovementComponent_MetaData[] = {
				{ "Category", "Assault" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Assault.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TankMovementComponent = { UE4CodeGen_Private::EPropertyClass::Object, "TankMovementComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000008001c, 1, nullptr, STRUCT_OFFSET(AAssault, TankMovementComponent), Z_Construct_UClass_UTankMovementComponent_NoRegister, METADATA_PARAMS(NewProp_TankMovementComponent_MetaData, ARRAY_COUNT(NewProp_TankMovementComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CooldownTimeInSeconds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReloadTimeInSeconds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LaunchSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectileBlueprint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TankMovementComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAssault>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAssault::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAssault, 1288206052);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAssault(Z_Construct_UClass_AAssault, &AAssault::StaticClass, TEXT("/Script/GW_Game"), TEXT("AAssault"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAssault);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
