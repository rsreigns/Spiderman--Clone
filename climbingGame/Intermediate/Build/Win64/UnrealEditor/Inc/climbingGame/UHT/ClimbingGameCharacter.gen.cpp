// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "climbingGame/ClimbingGameCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClimbingGameCharacter() {}

// Begin Cross Module References
CLIMBINGGAME_API UClass* Z_Construct_UClass_AClimbingGameCharacter();
CLIMBINGGAME_API UClass* Z_Construct_UClass_AClimbingGameCharacter_NoRegister();
CLIMBINGGAME_API UClass* Z_Construct_UClass_UCustomMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_climbingGame();
// End Cross Module References

// Begin Class AClimbingGameCharacter
void AClimbingGameCharacter::StaticRegisterNativesAClimbingGameCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AClimbingGameCharacter);
UClass* Z_Construct_UClass_AClimbingGameCharacter_NoRegister()
{
	return AClimbingGameCharacter::StaticClass();
}
struct Z_Construct_UClass_AClimbingGameCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ClimbingGameCharacter.h" },
		{ "ModuleRelativePath", "ClimbingGameCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClimbingGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClimbingGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomMovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Custom Movement Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClimbingGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom Movement Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClimbingGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "ClimbingGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ClimbingGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "ClimbingGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "ClimbingGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbMoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Climbing move action\n" },
#endif
		{ "ModuleRelativePath", "ClimbingGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Climbing move action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbHopAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ClimbingGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "ClimbingGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ClimbingGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sprint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ClimbingGameCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomMovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClimbMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClimbMoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClimbHopAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClimbAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClimbingGameCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClimbingGameCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClimbingGameCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_CustomMovementComponent = { "CustomMovementComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClimbingGameCharacter, CustomMovementComponent), Z_Construct_UClass_UCustomMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomMovementComponent_MetaData), NewProp_CustomMovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_MotionWarpingComponent = { "MotionWarpingComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClimbingGameCharacter, MotionWarpingComponent), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionWarpingComponent_MetaData), NewProp_MotionWarpingComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClimbingGameCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_ClimbMappingContext = { "ClimbMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClimbingGameCharacter, ClimbMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbMappingContext_MetaData), NewProp_ClimbMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClimbingGameCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClimbingGameCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_ClimbMoveAction = { "ClimbMoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClimbingGameCharacter, ClimbMoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbMoveAction_MetaData), NewProp_ClimbMoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_ClimbHopAction = { "ClimbHopAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClimbingGameCharacter, ClimbHopAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbHopAction_MetaData), NewProp_ClimbHopAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClimbingGameCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_ClimbAction = { "ClimbAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClimbingGameCharacter, ClimbAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbAction_MetaData), NewProp_ClimbAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_Sprint = { "Sprint", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClimbingGameCharacter, Sprint), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sprint_MetaData), NewProp_Sprint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClimbingGameCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_CustomMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_MotionWarpingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_ClimbMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_ClimbMoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_ClimbHopAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_ClimbAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClimbingGameCharacter_Statics::NewProp_Sprint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClimbingGameCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AClimbingGameCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_climbingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClimbingGameCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AClimbingGameCharacter_Statics::ClassParams = {
	&AClimbingGameCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AClimbingGameCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AClimbingGameCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AClimbingGameCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AClimbingGameCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AClimbingGameCharacter()
{
	if (!Z_Registration_Info_UClass_AClimbingGameCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AClimbingGameCharacter.OuterSingleton, Z_Construct_UClass_AClimbingGameCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AClimbingGameCharacter.OuterSingleton;
}
template<> CLIMBINGGAME_API UClass* StaticClass<AClimbingGameCharacter>()
{
	return AClimbingGameCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AClimbingGameCharacter);
AClimbingGameCharacter::~AClimbingGameCharacter() {}
// End Class AClimbingGameCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_ClimbingGameCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AClimbingGameCharacter, AClimbingGameCharacter::StaticClass, TEXT("AClimbingGameCharacter"), &Z_Registration_Info_UClass_AClimbingGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AClimbingGameCharacter), 2197355026U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_ClimbingGameCharacter_h_3008477448(TEXT("/Script/climbingGame"),
	Z_CompiledInDeferFile_FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_ClimbingGameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_ClimbingGameCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
