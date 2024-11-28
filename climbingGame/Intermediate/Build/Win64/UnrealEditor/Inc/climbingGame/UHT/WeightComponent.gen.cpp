// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "climbingGame/WeightSystem/WeightComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeightComponent() {}

// Begin Cross Module References
CLIMBINGGAME_API UClass* Z_Construct_UClass_UWeightComponent();
CLIMBINGGAME_API UClass* Z_Construct_UClass_UWeightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
UPackage* Z_Construct_UPackage__Script_climbingGame();
// End Cross Module References

// Begin Class UWeightComponent Function HandleAboveObjectMovedAway
struct Z_Construct_UFunction_UWeightComponent_HandleAboveObjectMovedAway_Statics
{
	struct WeightComponent_eventHandleAboveObjectMovedAway_Parms
	{
		AActor* EndOverlapObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WeightSystem/WeightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndOverlapObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeightComponent_HandleAboveObjectMovedAway_Statics::NewProp_EndOverlapObject = { "EndOverlapObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeightComponent_eventHandleAboveObjectMovedAway_Parms, EndOverlapObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeightComponent_HandleAboveObjectMovedAway_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeightComponent_HandleAboveObjectMovedAway_Statics::NewProp_EndOverlapObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeightComponent_HandleAboveObjectMovedAway_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeightComponent_HandleAboveObjectMovedAway_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeightComponent, nullptr, "HandleAboveObjectMovedAway", nullptr, nullptr, Z_Construct_UFunction_UWeightComponent_HandleAboveObjectMovedAway_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeightComponent_HandleAboveObjectMovedAway_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeightComponent_HandleAboveObjectMovedAway_Statics::WeightComponent_eventHandleAboveObjectMovedAway_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeightComponent_HandleAboveObjectMovedAway_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeightComponent_HandleAboveObjectMovedAway_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeightComponent_HandleAboveObjectMovedAway_Statics::WeightComponent_eventHandleAboveObjectMovedAway_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeightComponent_HandleAboveObjectMovedAway()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeightComponent_HandleAboveObjectMovedAway_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeightComponent::execHandleAboveObjectMovedAway)
{
	P_GET_OBJECT(AActor,Z_Param_EndOverlapObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleAboveObjectMovedAway(Z_Param_EndOverlapObject);
	P_NATIVE_END;
}
// End Class UWeightComponent Function HandleAboveObjectMovedAway

// Begin Class UWeightComponent Function HandleHitEvent
struct Z_Construct_UFunction_UWeightComponent_HandleHitEvent_Statics
{
	struct WeightComponent_eventHandleHitEvent_Parms
	{
		AActor* HittingActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WeightSystem/WeightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HittingActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeightComponent_HandleHitEvent_Statics::NewProp_HittingActor = { "HittingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeightComponent_eventHandleHitEvent_Parms, HittingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeightComponent_HandleHitEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeightComponent_HandleHitEvent_Statics::NewProp_HittingActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeightComponent_HandleHitEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeightComponent_HandleHitEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeightComponent, nullptr, "HandleHitEvent", nullptr, nullptr, Z_Construct_UFunction_UWeightComponent_HandleHitEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeightComponent_HandleHitEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeightComponent_HandleHitEvent_Statics::WeightComponent_eventHandleHitEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeightComponent_HandleHitEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeightComponent_HandleHitEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeightComponent_HandleHitEvent_Statics::WeightComponent_eventHandleHitEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeightComponent_HandleHitEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeightComponent_HandleHitEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeightComponent::execHandleHitEvent)
{
	P_GET_OBJECT(AActor,Z_Param_HittingActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleHitEvent(Z_Param_HittingActor);
	P_NATIVE_END;
}
// End Class UWeightComponent Function HandleHitEvent

// Begin Class UWeightComponent
void UWeightComponent::StaticRegisterNativesUWeightComponent()
{
	UClass* Class = UWeightComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleAboveObjectMovedAway", &UWeightComponent::execHandleAboveObjectMovedAway },
		{ "HandleHitEvent", &UWeightComponent::execHandleHitEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeightComponent);
UClass* Z_Construct_UClass_UWeightComponent_NoRegister()
{
	return UWeightComponent::StaticClass();
}
struct Z_Construct_UClass_UWeightComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WeightSystem/WeightComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "WeightSystem/WeightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitActor_MetaData[] = {
		{ "ModuleRelativePath", "WeightSystem/WeightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BelowObjectWeightComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Weight Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeightSystem/WeightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weight Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BelowObject_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weight" },
		{ "ModuleRelativePath", "WeightSystem/WeightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugData_MetaData[] = {
		{ "AllowPrivatAccess", "true" },
		{ "Category", "Weight" },
		{ "ModuleRelativePath", "WeightSystem/WeightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectWeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weight" },
		{ "ModuleRelativePath", "WeightSystem/WeightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AggregatedWeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weight" },
		{ "ModuleRelativePath", "WeightSystem/WeightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weight" },
		{ "ModuleRelativePath", "WeightSystem/WeightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTraceRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weight" },
		{ "ModuleRelativePath", "WeightSystem/WeightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TracedObjectTypes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weight" },
		{ "ModuleRelativePath", "WeightSystem/WeightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BelowObjectWeightComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BelowObject;
	static void NewProp_bShowDebugData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObjectWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AggregatedWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTraceRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TracedObjectTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TracedObjectTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeightComponent_HandleAboveObjectMovedAway, "HandleAboveObjectMovedAway" }, // 3981309075
		{ &Z_Construct_UFunction_UWeightComponent_HandleHitEvent, "HandleHitEvent" }, // 2610036843
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeightComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeightComponent_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeightComponent, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitActor_MetaData), NewProp_HitActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeightComponent_Statics::NewProp_BelowObjectWeightComponent = { "BelowObjectWeightComponent", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeightComponent, BelowObjectWeightComponent), Z_Construct_UClass_UWeightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BelowObjectWeightComponent_MetaData), NewProp_BelowObjectWeightComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeightComponent_Statics::NewProp_BelowObject = { "BelowObject", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeightComponent, BelowObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BelowObject_MetaData), NewProp_BelowObject_MetaData) };
void Z_Construct_UClass_UWeightComponent_Statics::NewProp_bShowDebugData_SetBit(void* Obj)
{
	((UWeightComponent*)Obj)->bShowDebugData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeightComponent_Statics::NewProp_bShowDebugData = { "bShowDebugData", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeightComponent), &Z_Construct_UClass_UWeightComponent_Statics::NewProp_bShowDebugData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebugData_MetaData), NewProp_bShowDebugData_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeightComponent_Statics::NewProp_ObjectWeight = { "ObjectWeight", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeightComponent, ObjectWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectWeight_MetaData), NewProp_ObjectWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeightComponent_Statics::NewProp_AggregatedWeight = { "AggregatedWeight", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeightComponent, AggregatedWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AggregatedWeight_MetaData), NewProp_AggregatedWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeightComponent_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeightComponent, TraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceRadius_MetaData), NewProp_TraceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeightComponent_Statics::NewProp_NewTraceRadius = { "NewTraceRadius", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeightComponent, NewTraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTraceRadius_MetaData), NewProp_NewTraceRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeightComponent_Statics::NewProp_TracedObjectTypes_Inner = { "TracedObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWeightComponent_Statics::NewProp_TracedObjectTypes = { "TracedObjectTypes", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeightComponent, TracedObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TracedObjectTypes_MetaData), NewProp_TracedObjectTypes_MetaData) }; // 1798967895
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeightComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeightComponent_Statics::NewProp_HitActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeightComponent_Statics::NewProp_BelowObjectWeightComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeightComponent_Statics::NewProp_BelowObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeightComponent_Statics::NewProp_bShowDebugData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeightComponent_Statics::NewProp_ObjectWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeightComponent_Statics::NewProp_AggregatedWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeightComponent_Statics::NewProp_TraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeightComponent_Statics::NewProp_NewTraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeightComponent_Statics::NewProp_TracedObjectTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeightComponent_Statics::NewProp_TracedObjectTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeightComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_climbingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeightComponent_Statics::ClassParams = {
	&UWeightComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWeightComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeightComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeightComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeightComponent()
{
	if (!Z_Registration_Info_UClass_UWeightComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeightComponent.OuterSingleton, Z_Construct_UClass_UWeightComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeightComponent.OuterSingleton;
}
template<> CLIMBINGGAME_API UClass* StaticClass<UWeightComponent>()
{
	return UWeightComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeightComponent);
UWeightComponent::~UWeightComponent() {}
// End Class UWeightComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_WeightSystem_WeightComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeightComponent, UWeightComponent::StaticClass, TEXT("UWeightComponent"), &Z_Registration_Info_UClass_UWeightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeightComponent), 93939866U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_WeightSystem_WeightComponent_h_1636186422(TEXT("/Script/climbingGame"),
	Z_CompiledInDeferFile_FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_WeightSystem_WeightComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_WeightSystem_WeightComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
