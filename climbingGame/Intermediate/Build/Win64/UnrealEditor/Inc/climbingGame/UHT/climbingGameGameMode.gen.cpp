// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "climbingGame/climbingGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeclimbingGameGameMode() {}

// Begin Cross Module References
CLIMBINGGAME_API UClass* Z_Construct_UClass_AclimbingGameGameMode();
CLIMBINGGAME_API UClass* Z_Construct_UClass_AclimbingGameGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_climbingGame();
// End Cross Module References

// Begin Class AclimbingGameGameMode
void AclimbingGameGameMode::StaticRegisterNativesAclimbingGameGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AclimbingGameGameMode);
UClass* Z_Construct_UClass_AclimbingGameGameMode_NoRegister()
{
	return AclimbingGameGameMode::StaticClass();
}
struct Z_Construct_UClass_AclimbingGameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "climbingGameGameMode.h" },
		{ "ModuleRelativePath", "climbingGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AclimbingGameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AclimbingGameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_climbingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AclimbingGameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AclimbingGameGameMode_Statics::ClassParams = {
	&AclimbingGameGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AclimbingGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AclimbingGameGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AclimbingGameGameMode()
{
	if (!Z_Registration_Info_UClass_AclimbingGameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AclimbingGameGameMode.OuterSingleton, Z_Construct_UClass_AclimbingGameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AclimbingGameGameMode.OuterSingleton;
}
template<> CLIMBINGGAME_API UClass* StaticClass<AclimbingGameGameMode>()
{
	return AclimbingGameGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AclimbingGameGameMode);
AclimbingGameGameMode::~AclimbingGameGameMode() {}
// End Class AclimbingGameGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_climbingGameGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AclimbingGameGameMode, AclimbingGameGameMode::StaticClass, TEXT("AclimbingGameGameMode"), &Z_Registration_Info_UClass_AclimbingGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AclimbingGameGameMode), 3978653678U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_climbingGameGameMode_h_3231031809(TEXT("/Script/climbingGame"),
	Z_CompiledInDeferFile_FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_climbingGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Spiderman__Clone_climbingGame_Source_climbingGame_climbingGameGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
