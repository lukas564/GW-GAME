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
// End Cross Module References
	void AAssaultPlayerController::StaticRegisterNativesAAssaultPlayerController()
	{
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
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "AssaultPlayerController.h" },
				{ "ModuleRelativePath", "Public/AssaultPlayerController.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAssaultPlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAssaultPlayerController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAssaultPlayerController, 749124864);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAssaultPlayerController(Z_Construct_UClass_AAssaultPlayerController, &AAssaultPlayerController::StaticClass, TEXT("/Script/GW_Game"), TEXT("AAssaultPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAssaultPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
