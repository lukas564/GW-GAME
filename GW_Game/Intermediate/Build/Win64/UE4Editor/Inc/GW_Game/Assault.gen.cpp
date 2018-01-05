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
	GW_GAME_API UFunction* Z_Construct_UFunction_AAssault_SetBarrelReference();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GW_GAME_API UFunction* Z_Construct_UFunction_AAssault_SetTurretReference();
// End Cross Module References
	void AAssault::StaticRegisterNativesAAssault()
	{
		UClass* Class = AAssault::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBarrelReference", (Native)&AAssault::execSetBarrelReference },
			{ "SetTurretReference", (Native)&AAssault::execSetTurretReference },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AAssault_SetBarrelReference()
	{
		struct Assault_eventSetBarrelReference_Parms
		{
			UStaticMeshComponent* BarrelToSet;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarrelToSet_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarrelToSet = { UE4CodeGen_Private::EPropertyClass::Object, "BarrelToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Assault_eventSetBarrelReference_Parms, BarrelToSet), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_BarrelToSet_MetaData, ARRAY_COUNT(NewProp_BarrelToSet_MetaData)) };
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
			UStaticMeshComponent* TurretToSet;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurretToSet_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurretToSet = { UE4CodeGen_Private::EPropertyClass::Object, "TurretToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Assault_eventSetTurretReference_Parms, TurretToSet), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_TurretToSet_MetaData, ARRAY_COUNT(NewProp_TurretToSet_MetaData)) };
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
				{ &Z_Construct_UFunction_AAssault_SetBarrelReference, "SetBarrelReference" }, // 3649220242
				{ &Z_Construct_UFunction_AAssault_SetTurretReference, "SetTurretReference" }, // 1956086593
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Assault.h" },
				{ "ModuleRelativePath", "Public/Assault.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchSpeed_MetaData[] = {
				{ "Category", "Firing" },
				{ "ModuleRelativePath", "Public/Assault.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "LaunchSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AAssault, LaunchSpeed), METADATA_PARAMS(NewProp_LaunchSpeed_MetaData, ARRAY_COUNT(NewProp_LaunchSpeed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LaunchSpeed,
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
	IMPLEMENT_CLASS(AAssault, 1422416074);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAssault(Z_Construct_UClass_AAssault, &AAssault::StaticClass, TEXT("/Script/GW_Game"), TEXT("AAssault"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAssault);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
