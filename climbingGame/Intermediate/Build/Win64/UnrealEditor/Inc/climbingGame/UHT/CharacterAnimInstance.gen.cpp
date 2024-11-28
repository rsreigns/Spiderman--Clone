// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "climbingGame/Public/AnimInstance/CharacterAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAnimInstance() {}

// Begin Cross Module References
CLIMBINGGAME_API UClass* Z_Construct_UClass_AClimbingGameCharacter_NoRegister();
CLIMBINGGAME_API UClass* Z_Construct_UClass_UCharacterAnimInstance();
CLIMBINGGAME_API UClass* Z_Construct_UClass_UCharacterAnimInstance_NoRegister();
CLIMBINGGAME_API UClass* Z_Construct_UClass_UCustomMovementComponent_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_climbingGame();
// End Cross Module References

// Begin Class UCharacterAnimInstance
void UCharacterAnimInstance::StaticRegisterNativesUCharacterAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterAnimInstance);
UClass* Z_Construct_UClass_UCharacterAnimInstance_NoRegister()
{
	return UCharacterAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UCharacterAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstance/CharacterAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbingGameCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomMovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Reference" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Reference" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldMove_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Reference" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFalling_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Reference" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsClimbing_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Reference" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Reference" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClimbingGameCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomMovementComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirSpeed;
	static void NewProp_bShouldMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldMove;
	static void NewProp_bIsFalling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFalling;
	static void NewProp_bIsClimbing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsClimbing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClimbVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_ClimbingGameCharacter = { "ClimbingGameCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimInstance, ClimbingGameCharacter), Z_Construct_UClass_AClimbingGameCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbingGameCharacter_MetaData), NewProp_ClimbingGameCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_CustomMovementComponent = { "CustomMovementComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimInstance, CustomMovementComponent), Z_Construct_UClass_UCustomMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomMovementComponent_MetaData), NewProp_CustomMovementComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimInstance, GroundSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSpeed_MetaData), NewProp_GroundSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_AirSpeed = { "AirSpeed", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimInstance, AirSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirSpeed_MetaData), NewProp_AirSpeed_MetaData) };
void Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bShouldMove_SetBit(void* Obj)
{
	((UCharacterAnimInstance*)Obj)->bShouldMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bShouldMove = { "bShouldMove", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterAnimInstance), &Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bShouldMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldMove_MetaData), NewProp_bShouldMove_MetaData) };
void Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsFalling_SetBit(void* Obj)
{
	((UCharacterAnimInstance*)Obj)->bIsFalling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsFalling = { "bIsFalling", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterAnimInstance), &Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFalling_MetaData), NewProp_bIsFalling_MetaData) };
void Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsClimbing_SetBit(void* Obj)
{
	((UCharacterAnimInstance*)Obj)->bIsClimbing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsClimbing = { "bIsClimbing", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterAnimInstance), &Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsClimbing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsClimbing_MetaData), NewProp_bIsClimbing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_ClimbVelocity = { "ClimbVelocity", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimInstance, ClimbVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbVelocity_MetaData), NewProp_ClimbVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_ClimbingGameCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_CustomMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_GroundSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_AirSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bShouldMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsFalling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsClimbing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_ClimbVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_climbingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAnimInstance_Statics::ClassParams = {
	&UCharacterAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterAnimInstance()
{
	if (!Z_Registration_Info_UClass_UCharacterAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAnimInstance.OuterSingleton, Z_Construct_UClass_UCharacterAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterAnimInstance.OuterSingleton;
}
template<> CLIMBINGGAME_API UClass* StaticClass<UCharacterAnimInstance>()
{
	return UCharacterAnimInstance::StaticClass();
}
UCharacterAnimInstance::UCharacterAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAnimInstance);
UCharacterAnimInstance::~UCharacterAnimInstance() {}
// End Class UCharacterAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_Public_AnimInstance_CharacterAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAnimInstance, UCharacterAnimInstance::StaticClass, TEXT("UCharacterAnimInstance"), &Z_Registration_Info_UClass_UCharacterAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAnimInstance), 3552244876U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_Public_AnimInstance_CharacterAnimInstance_h_3699342018(TEXT("/Script/climbingGame"),
	Z_CompiledInDeferFile_FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_Public_AnimInstance_CharacterAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_Public_AnimInstance_CharacterAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
