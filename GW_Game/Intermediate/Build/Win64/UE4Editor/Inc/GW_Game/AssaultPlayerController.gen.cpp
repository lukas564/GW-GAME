// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AssaultPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssaultPlayerController() {}
// Cross Module References
	GW_GAME_API UClass* Z_Construct_UClass_AAssaultPlayerController_NoRegister();
	GW_GAME_API UClass* Z_Construct_UClass_AAssaultPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_GW_Game();
	GW_GAME_API UFunction* Z_Construct_UFunction_AAssaultPlayerController_FoundAimingComponent();
	GW_GAME_API UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister();
// End Cross Module References
	static FName NAME_AAssaultPlayerController_FoundAimingComponent = FName(TEXT("FoundAimingComponent"));
	void AAssaultPlayerController::FoundAimingComponent(UTankAimingComponent* AimRef)
	{
		AssaultPlayerController_eventFoundAimingComponent_Parms Parms;
		Parms.AimRef=AimRef;
		ProcessEvent(FindFunctionChecked(NAME_AAssaultPlayerController_FoundAimingComponent),&Parms);
	}
	void AAssaultPlayerController::StaticRegisterNativesAAssaultPlayerController()
	{
	}
	UFunction* Z_Construct_UFunction_AAssaultPlayerController_FoundAimingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimRef_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimRef = { UE4CodeGen_Private::EPropertyClass::Object, "AimRef", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AssaultPlayerController_eventFoundAimingComponent_Parms, AimRef), Z_Construct_UClass_UTankAimingComponent_NoRegister, METADATA_PARAMS(NewProp_AimRef_MetaData, ARRAY_COUNT(NewProp_AimRef_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AimRef,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/AssaultPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssaultPlayerController, "FoundAimingComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(AssaultPlayerController_eventFoundAimingComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAssaultPlayerController_NoRegister()
	{
		return AAssaultPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_AAssaultPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_GW_Game,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AAssaultPlayerController_FoundAimingComponent, "FoundAimingComponent" }, // 795420292
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "AssaultPlayerController.h" },
				{ "ModuleRelativePath", "Public/AssaultPlayerController.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineTraceRange_MetaData[] = {
				{ "Category", "AssaultPlayerController" },
				{ "ModuleRelativePath", "Public/AssaultPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineTraceRange = { UE4CodeGen_Private::EPropertyClass::Float, "LineTraceRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AAssaultPlayerController, LineTraceRange), METADATA_PARAMS(NewProp_LineTraceRange_MetaData, ARRAY_COUNT(NewProp_LineTraceRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossHairYLocation_MetaData[] = {
				{ "Category", "AssaultPlayerController" },
				{ "ModuleRelativePath", "Public/AssaultPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrossHairYLocation = { UE4CodeGen_Private::EPropertyClass::Float, "CrossHairYLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AAssaultPlayerController, CrossHairYLocation), METADATA_PARAMS(NewProp_CrossHairYLocation_MetaData, ARRAY_COUNT(NewProp_CrossHairYLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossHairXLocation_MetaData[] = {
				{ "Category", "AssaultPlayerController" },
				{ "ModuleRelativePath", "Public/AssaultPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrossHairXLocation = { UE4CodeGen_Private::EPropertyClass::Float, "CrossHairXLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AAssaultPlayerController, CrossHairXLocation), METADATA_PARAMS(NewProp_CrossHairXLocation_MetaData, ARRAY_COUNT(NewProp_CrossHairXLocation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineTraceRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CrossHairYLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CrossHairXLocation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAssaultPlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAssaultPlayerController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAssaultPlayerController, 2035358914);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAssaultPlayerController(Z_Construct_UClass_AAssaultPlayerController, &AAssaultPlayerController::StaticClass, TEXT("/Script/GW_Game"), TEXT("AAssaultPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAssaultPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
