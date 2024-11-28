// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WeightSystem/WeightComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CLIMBINGGAME_WeightComponent_generated_h
#error "WeightComponent.generated.h already included, missing '#pragma once' in WeightComponent.h"
#endif
#define CLIMBINGGAME_WeightComponent_generated_h

#define FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_WeightSystem_WeightComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleAboveObjectMovedAway); \
	DECLARE_FUNCTION(execHandleHitEvent);


#define FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_WeightSystem_WeightComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeightComponent(); \
	friend struct Z_Construct_UClass_UWeightComponent_Statics; \
public: \
	DECLARE_CLASS(UWeightComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/climbingGame"), NO_API) \
	DECLARE_SERIALIZER(UWeightComponent)


#define FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_WeightSystem_WeightComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWeightComponent(UWeightComponent&&); \
	UWeightComponent(const UWeightComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeightComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeightComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeightComponent) \
	NO_API virtual ~UWeightComponent();


#define FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_WeightSystem_WeightComponent_h_8_PROLOG
#define FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_WeightSystem_WeightComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_WeightSystem_WeightComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_WeightSystem_WeightComponent_h_11_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_WeightSystem_WeightComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIMBINGGAME_API UClass* StaticClass<class UWeightComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_WeightSystem_WeightComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
