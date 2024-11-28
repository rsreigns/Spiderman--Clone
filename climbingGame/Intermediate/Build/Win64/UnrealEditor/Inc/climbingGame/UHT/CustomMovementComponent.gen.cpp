// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "climbingGame/Public/Components/CustomMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomMovementComponent() {}

// Begin Cross Module References
CLIMBINGGAME_API UClass* Z_Construct_UClass_AClimbingGameCharacter_NoRegister();
CLIMBINGGAME_API UClass* Z_Construct_UClass_UCustomMovementComponent();
CLIMBINGGAME_API UClass* Z_Construct_UClass_UCustomMovementComponent_NoRegister();
CLIMBINGGAME_API UEnum* Z_Construct_UEnum_climbingGame_ECustomMovementMode();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
UPackage* Z_Construct_UPackage__Script_climbingGame();
// End Cross Module References

// Begin Enum ECustomMovementMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomMovementMode;
static UEnum* ECustomMovementMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECustomMovementMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECustomMovementMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_climbingGame_ECustomMovementMode, (UObject*)Z_Construct_UPackage__Script_climbingGame(), TEXT("ECustomMovementMode"));
	}
	return Z_Registration_Info_UEnum_ECustomMovementMode.OuterSingleton;
}
template<> CLIMBINGGAME_API UEnum* StaticEnum<ECustomMovementMode::Type>()
{
	return ECustomMovementMode_StaticEnum();
}
struct Z_Construct_UEnum_climbingGame_ECustomMovementMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "MOVE_Climb.DisplayName", "ClimbMode" },
		{ "MOVE_Climb.Name", "ECustomMovementMode::MOVE_Climb" },
		{ "Move_WallRun.DisplayName", "WallRunMode" },
		{ "Move_WallRun.Name", "ECustomMovementMode::Move_WallRun" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECustomMovementMode::MOVE_Climb", (int64)ECustomMovementMode::MOVE_Climb },
		{ "ECustomMovementMode::Move_WallRun", (int64)ECustomMovementMode::Move_WallRun },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_climbingGame_ECustomMovementMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_climbingGame,
	nullptr,
	"ECustomMovementMode",
	"ECustomMovementMode::Type",
	Z_Construct_UEnum_climbingGame_ECustomMovementMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_climbingGame_ECustomMovementMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_climbingGame_ECustomMovementMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_climbingGame_ECustomMovementMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_climbingGame_ECustomMovementMode()
{
	if (!Z_Registration_Info_UEnum_ECustomMovementMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomMovementMode.InnerSingleton, Z_Construct_UEnum_climbingGame_ECustomMovementMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECustomMovementMode.InnerSingleton;
}
// End Enum ECustomMovementMode

// Begin Class UCustomMovementComponent Function OnClimbMontageBlendOut
struct Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageBlendOut_Statics
{
	struct CustomMovementComponent_eventOnClimbMontageBlendOut_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageBlendOut_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMovementComponent_eventOnClimbMontageBlendOut_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageBlendOut_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((CustomMovementComponent_eventOnClimbMontageBlendOut_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageBlendOut_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CustomMovementComponent_eventOnClimbMontageBlendOut_Parms), &Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageBlendOut_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageBlendOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageBlendOut_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageBlendOut_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageBlendOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageBlendOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMovementComponent, nullptr, "OnClimbMontageBlendOut", nullptr, nullptr, Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageBlendOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageBlendOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageBlendOut_Statics::CustomMovementComponent_eventOnClimbMontageBlendOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageBlendOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageBlendOut_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageBlendOut_Statics::CustomMovementComponent_eventOnClimbMontageBlendOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageBlendOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageBlendOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomMovementComponent::execOnClimbMontageBlendOut)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClimbMontageBlendOut(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class UCustomMovementComponent Function OnClimbMontageBlendOut

// Begin Class UCustomMovementComponent Function OnClimbMontageEnded
struct Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageEnded_Statics
{
	struct CustomMovementComponent_eventOnClimbMontageEnded_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMovementComponent_eventOnClimbMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((CustomMovementComponent_eventOnClimbMontageEnded_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CustomMovementComponent_eventOnClimbMontageEnded_Parms), &Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageEnded_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageEnded_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMovementComponent, nullptr, "OnClimbMontageEnded", nullptr, nullptr, Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageEnded_Statics::CustomMovementComponent_eventOnClimbMontageEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageEnded_Statics::CustomMovementComponent_eventOnClimbMontageEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomMovementComponent::execOnClimbMontageEnded)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClimbMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class UCustomMovementComponent Function OnClimbMontageEnded

// Begin Class UCustomMovementComponent
void UCustomMovementComponent::StaticRegisterNativesUCustomMovementComponent()
{
	UClass* Class = UCustomMovementComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnClimbMontageBlendOut", &UCustomMovementComponent::execOnClimbMontageBlendOut },
		{ "OnClimbMontageEnded", &UCustomMovementComponent::execOnClimbMontageEnded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomMovementComponent);
UClass* Z_Construct_UClass_UCustomMovementComponent_NoRegister()
{
	return UCustomMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UCustomMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/CustomMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayerAnimInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbabaleSurfaceTraceObjects_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterMovement: Climbing" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleTraceRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterMovement: Climbing" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleHalfHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterMovement: Climbing" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBreakClimbDeccerleration_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterMovement: Climbing" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxClimbSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterMovement: Climbing" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxClimbAcceleration_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterMovement: Climbing" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedgeCheckDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterMovement: Climbing" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbLocation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterMovement: Climbing" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedgeClimbDownLocation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterMovement: Climbing" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedgeClimbAngleThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterMovement: Climbing" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldClimbDownLedge_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterMovement: Climbing" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HopDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterMovement: Climbing" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleToClimbMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbToTopMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbDownLedge_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VaultMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HopUpMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HopDownMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HopLeftMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HopRightMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastPlayedClimbMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedgeTraceOffsetZ_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterMovement: Climbing" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedgeTraceOffsetX_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterMovement: Climbing" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedgeClimbStandDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterMovement: Climbing" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayerAnimInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayerCharacter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClimbabaleSurfaceTraceObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClimbabaleSurfaceTraceObjects;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleTraceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleHalfHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBreakClimbDeccerleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxClimbSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxClimbAcceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LedgeCheckDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClimbLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LedgeClimbDownLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LedgeClimbAngleThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShouldClimbDownLedge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HopDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleToClimbMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClimbToTopMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClimbDownLedge;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VaultMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HopUpMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HopDownMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HopLeftMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HopRightMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastPlayedClimbMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LedgeTraceOffsetZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LedgeTraceOffsetX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LedgeClimbStandDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageBlendOut, "OnClimbMontageBlendOut" }, // 2409780033
		{ &Z_Construct_UFunction_UCustomMovementComponent_OnClimbMontageEnded, "OnClimbMontageEnded" }, // 2791146191
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_OwningPlayerAnimInstance = { "OwningPlayerAnimInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, OwningPlayerAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPlayerAnimInstance_MetaData), NewProp_OwningPlayerAnimInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_OwningPlayerCharacter = { "OwningPlayerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, OwningPlayerCharacter), Z_Construct_UClass_AClimbingGameCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPlayerCharacter_MetaData), NewProp_OwningPlayerCharacter_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_ClimbabaleSurfaceTraceObjects_Inner = { "ClimbabaleSurfaceTraceObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_ClimbabaleSurfaceTraceObjects = { "ClimbabaleSurfaceTraceObjects", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, ClimbabaleSurfaceTraceObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbabaleSurfaceTraceObjects_MetaData), NewProp_ClimbabaleSurfaceTraceObjects_MetaData) }; // 1798967895
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CapsuleTraceRadius = { "CapsuleTraceRadius", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, CapsuleTraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleTraceRadius_MetaData), NewProp_CapsuleTraceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CapsuleHalfHeight = { "CapsuleHalfHeight", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, CapsuleHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleHalfHeight_MetaData), NewProp_CapsuleHalfHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MaxBreakClimbDeccerleration = { "MaxBreakClimbDeccerleration", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, MaxBreakClimbDeccerleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBreakClimbDeccerleration_MetaData), NewProp_MaxBreakClimbDeccerleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MaxClimbSpeed = { "MaxClimbSpeed", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, MaxClimbSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxClimbSpeed_MetaData), NewProp_MaxClimbSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MaxClimbAcceleration = { "MaxClimbAcceleration", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, MaxClimbAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxClimbAcceleration_MetaData), NewProp_MaxClimbAcceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_LedgeCheckDistance = { "LedgeCheckDistance", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, LedgeCheckDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedgeCheckDistance_MetaData), NewProp_LedgeCheckDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_ClimbLocation = { "ClimbLocation", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, ClimbLocation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbLocation_MetaData), NewProp_ClimbLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_LedgeClimbDownLocation = { "LedgeClimbDownLocation", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, LedgeClimbDownLocation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedgeClimbDownLocation_MetaData), NewProp_LedgeClimbDownLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_LedgeClimbAngleThreshold = { "LedgeClimbAngleThreshold", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, LedgeClimbAngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedgeClimbAngleThreshold_MetaData), NewProp_LedgeClimbAngleThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_ShouldClimbDownLedge = { "ShouldClimbDownLedge", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, ShouldClimbDownLedge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldClimbDownLedge_MetaData), NewProp_ShouldClimbDownLedge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_HopDistance = { "HopDistance", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, HopDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HopDistance_MetaData), NewProp_HopDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_IdleToClimbMontage = { "IdleToClimbMontage", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, IdleToClimbMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleToClimbMontage_MetaData), NewProp_IdleToClimbMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_ClimbToTopMontage = { "ClimbToTopMontage", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, ClimbToTopMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbToTopMontage_MetaData), NewProp_ClimbToTopMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_ClimbDownLedge = { "ClimbDownLedge", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, ClimbDownLedge), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbDownLedge_MetaData), NewProp_ClimbDownLedge_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_VaultMontage = { "VaultMontage", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, VaultMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VaultMontage_MetaData), NewProp_VaultMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_HopUpMontage = { "HopUpMontage", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, HopUpMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HopUpMontage_MetaData), NewProp_HopUpMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_HopDownMontage = { "HopDownMontage", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, HopDownMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HopDownMontage_MetaData), NewProp_HopDownMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_HopLeftMontage = { "HopLeftMontage", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, HopLeftMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HopLeftMontage_MetaData), NewProp_HopLeftMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_HopRightMontage = { "HopRightMontage", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, HopRightMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HopRightMontage_MetaData), NewProp_HopRightMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_LastPlayedClimbMontage = { "LastPlayedClimbMontage", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, LastPlayedClimbMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastPlayedClimbMontage_MetaData), NewProp_LastPlayedClimbMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_LedgeTraceOffsetZ = { "LedgeTraceOffsetZ", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, LedgeTraceOffsetZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedgeTraceOffsetZ_MetaData), NewProp_LedgeTraceOffsetZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_LedgeTraceOffsetX = { "LedgeTraceOffsetX", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, LedgeTraceOffsetX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedgeTraceOffsetX_MetaData), NewProp_LedgeTraceOffsetX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_LedgeClimbStandDistance = { "LedgeClimbStandDistance", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomMovementComponent, LedgeClimbStandDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedgeClimbStandDistance_MetaData), NewProp_LedgeClimbStandDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_OwningPlayerAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_OwningPlayerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_ClimbabaleSurfaceTraceObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_ClimbabaleSurfaceTraceObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CapsuleTraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CapsuleHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MaxBreakClimbDeccerleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MaxClimbSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_MaxClimbAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_LedgeCheckDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_ClimbLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_LedgeClimbDownLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_LedgeClimbAngleThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_ShouldClimbDownLedge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_HopDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_IdleToClimbMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_ClimbToTopMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_ClimbDownLedge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_VaultMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_HopUpMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_HopDownMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_HopLeftMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_HopRightMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_LastPlayedClimbMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_LedgeTraceOffsetZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_LedgeTraceOffsetX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_LedgeClimbStandDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCustomMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_climbingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomMovementComponent_Statics::ClassParams = {
	&UCustomMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCustomMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomMovementComponent()
{
	if (!Z_Registration_Info_UClass_UCustomMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomMovementComponent.OuterSingleton, Z_Construct_UClass_UCustomMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomMovementComponent.OuterSingleton;
}
template<> CLIMBINGGAME_API UClass* StaticClass<UCustomMovementComponent>()
{
	return UCustomMovementComponent::StaticClass();
}
UCustomMovementComponent::UCustomMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomMovementComponent);
UCustomMovementComponent::~UCustomMovementComponent() {}
// End Class UCustomMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_Public_Components_CustomMovementComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECustomMovementMode_StaticEnum, TEXT("ECustomMovementMode"), &Z_Registration_Info_UEnum_ECustomMovementMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2151712232U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomMovementComponent, UCustomMovementComponent::StaticClass, TEXT("UCustomMovementComponent"), &Z_Registration_Info_UClass_UCustomMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomMovementComponent), 2933740946U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_Public_Components_CustomMovementComponent_h_1262802112(TEXT("/Script/climbingGame"),
	Z_CompiledInDeferFile_FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_Public_Components_CustomMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_Public_Components_CustomMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_Public_Components_CustomMovementComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_Public_Components_CustomMovementComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
