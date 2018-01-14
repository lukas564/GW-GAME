// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovementPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovementPoint() {}
// Cross Module References
	GW_GAME_API UClass* Z_Construct_UClass_UMovementPoint_NoRegister();
	GW_GAME_API UClass* Z_Construct_UClass_UMovementPoint();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_GW_Game();
	GW_GAME_API UFunction* Z_Construct_UFunction_UMovementPoint_SetThrottle();
// End Cross Module References
	void UMovementPoint::StaticRegisterNativesUMovementPoint()
	{
		UClass* Class = UMovementPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetThrottle", (Native)&UMovementPoint::execSetThrottle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMovementPoint_SetThrottle()
	{
		struct MovementPoint_eventSetThrottle_Parms
		{
			float Throttle;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Throttle = { UE4CodeGen_Private::EPropertyClass::Float, "Throttle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MovementPoint_eventSetThrottle_Parms, Throttle), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Throttle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Public/MovementPoint.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementPoint, "SetThrottle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MovementPoint_eventSetThrottle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovementPoint_NoRegister()
	{
		return UMovementPoint::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovementPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_GW_Game,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMovementPoint_SetThrottle, "SetThrottle" }, // 4201677393
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Object Activation Components|Activation Trigger" },
				{ "IncludePath", "MovementPoint.h" },
				{ "ModuleRelativePath", "Public/MovementPoint.h" },
				{ "ToolTip", "Movement is used to set maximum driving force and to apply force to tank" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementPointMaxDrivingForce_MetaData[] = {
				{ "Category", "MovementPoint" },
				{ "ModuleRelativePath", "Public/MovementPoint.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementPointMaxDrivingForce = { UE4CodeGen_Private::EPropertyClass::Float, "MovementPointMaxDrivingForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UMovementPoint, MovementPointMaxDrivingForce), METADATA_PARAMS(NewProp_MovementPointMaxDrivingForce_MetaData, ARRAY_COUNT(NewProp_MovementPointMaxDrivingForce_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementPointMaxDrivingForce,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovementPoint>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovementPoint::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
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
	IMPLEMENT_CLASS(UMovementPoint, 3695132386);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovementPoint(Z_Construct_UClass_UMovementPoint, &UMovementPoint::StaticClass, TEXT("/Script/GW_Game"), TEXT("UMovementPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovementPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
