// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/TankAimingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankAimingComponent() {}
// Cross Module References
	GW_GAME_API UEnum* Z_Construct_UEnum_GW_Game_EFiringState();
	UPackage* Z_Construct_UPackage__Script_GW_Game();
	GW_GAME_API UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister();
	GW_GAME_API UClass* Z_Construct_UClass_UTankAimingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	static UEnum* EFiringState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GW_Game_EFiringState, Z_Construct_UPackage__Script_GW_Game(), TEXT("EFiringState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFiringState(EFiringState_StaticEnum, TEXT("/Script/GW_Game"), TEXT("EFiringState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GW_Game_EFiringState_CRC() { return 377866212U; }
	UEnum* Z_Construct_UEnum_GW_Game_EFiringState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GW_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFiringState"), 0, Get_Z_Construct_UEnum_GW_Game_EFiringState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFiringState::Reloading", (int64)EFiringState::Reloading },
				{ "EFiringState::Aiming", (int64)EFiringState::Aiming },
				{ "EFiringState::Locked", (int64)EFiringState::Locked },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GW_Game,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFiringState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EFiringState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UTankAimingComponent::StaticRegisterNativesUTankAimingComponent()
	{
	}
	UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister()
	{
		return UTankAimingComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankAimingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_GW_Game,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "TankAimingComponent.h" },
				{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringState_MetaData[] = {
				{ "Category", "State" },
				{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FiringState = { UE4CodeGen_Private::EPropertyClass::Enum, "FiringState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000014, 1, nullptr, STRUCT_OFFSET(UTankAimingComponent, FiringState), Z_Construct_UEnum_GW_Game_EFiringState, METADATA_PARAMS(NewProp_FiringState_MetaData, ARRAY_COUNT(NewProp_FiringState_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FiringState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FiringState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FiringState_Underlying,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTankAimingComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTankAimingComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UTankAimingComponent, 3213538110);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankAimingComponent(Z_Construct_UClass_UTankAimingComponent, &UTankAimingComponent::StaticClass, TEXT("/Script/GW_Game"), TEXT("UTankAimingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankAimingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
