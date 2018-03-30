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
	GW_GAME_API UFunction* Z_Construct_UDelegateFunction_GW_Game_TankDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GW_Game();
	GW_GAME_API UClass* Z_Construct_UClass_AAssault_NoRegister();
	GW_GAME_API UClass* Z_Construct_UClass_AAssault();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	GW_GAME_API UFunction* Z_Construct_UFunction_AAssault_FireSound();
	GW_GAME_API UFunction* Z_Construct_UFunction_AAssault_GetHealthPercent();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_GW_Game_TankDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Assault.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GW_Game, "TankDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_AAssault_FireSound = FName(TEXT("FireSound"));
	void AAssault::FireSound()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAssault_FireSound),NULL);
	}
	void AAssault::StaticRegisterNativesAAssault()
	{
		UClass* Class = AAssault::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHealthPercent", (Native)&AAssault::execGetHealthPercent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AAssault_FireSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/Assault.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssault, "FireSound", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAssault_GetHealthPercent()
	{
		struct Assault_eventGetHealthPercent_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Assault_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "Public/Assault.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssault, "GetHealthPercent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Assault_eventGetHealthPercent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
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
				{ &Z_Construct_UFunction_AAssault_FireSound, "FireSound" }, // 1340201714
				{ &Z_Construct_UFunction_AAssault_GetHealthPercent, "GetHealthPercent" }, // 3485664693
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Assault.h" },
				{ "ModuleRelativePath", "Public/Assault.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "Public/Assault.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentHealth = { UE4CodeGen_Private::EPropertyClass::Int, "CurrentHealth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020001, 1, nullptr, STRUCT_OFFSET(AAssault, CurrentHealth), METADATA_PARAMS(NewProp_CurrentHealth_MetaData, ARRAY_COUNT(NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingHealth_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/Assault.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartingHealth = { UE4CodeGen_Private::EPropertyClass::Int, "StartingHealth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AAssault, StartingHealth), METADATA_PARAMS(NewProp_StartingHealth_MetaData, ARRAY_COUNT(NewProp_StartingHealth_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentHealth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartingHealth,
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
	IMPLEMENT_CLASS(AAssault, 3784582633);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAssault(Z_Construct_UClass_AAssault, &AAssault::StaticClass, TEXT("/Script/GW_Game"), TEXT("AAssault"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAssault);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
