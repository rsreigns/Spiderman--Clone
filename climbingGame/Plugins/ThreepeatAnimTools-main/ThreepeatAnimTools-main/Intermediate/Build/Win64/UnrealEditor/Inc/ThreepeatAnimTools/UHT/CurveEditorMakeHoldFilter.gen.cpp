// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThreepeatAnimTools/Public/CurveEditorMakeHoldFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveEditorMakeHoldFilter() {}

// Begin Cross Module References
CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorFilterBase();
THREEPEATANIMTOOLS_API UClass* Z_Construct_UClass_UCurveEditorMakeHoldFilter();
THREEPEATANIMTOOLS_API UClass* Z_Construct_UClass_UCurveEditorMakeHoldFilter_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThreepeatAnimTools();
// End Cross Module References

// Begin Class UCurveEditorMakeHoldFilter
void UCurveEditorMakeHoldFilter::StaticRegisterNativesUCurveEditorMakeHoldFilter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveEditorMakeHoldFilter);
UClass* Z_Construct_UClass_UCurveEditorMakeHoldFilter_NoRegister()
{
	return UCurveEditorMakeHoldFilter::StaticClass();
}
struct Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Threepeat - Make Hold" },
		{ "IncludePath", "CurveEditorMakeHoldFilter.h" },
		{ "ModuleRelativePath", "Public/CurveEditorMakeHoldFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHoldOnLast_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, use the last key as the old value (defaults to using first key value)*/" },
#endif
		{ "ModuleRelativePath", "Public/CurveEditorMakeHoldFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, use the last key as the old value (defaults to using first key value)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOvershoot_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CurveEditorMakeHoldFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOvershootSprintConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bOvershoot" },
		{ "ModuleRelativePath", "Public/CurveEditorMakeHoldFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOvershootDamping_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bOvershoot" },
		{ "ModuleRelativePath", "Public/CurveEditorMakeHoldFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOvershootPrerollHistorySeconds_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** how many selected keys before the hold should start (must be > 1 for overshoot to work)*/" },
#endif
		{ "EditCondition", "bOvershoot" },
		{ "ModuleRelativePath", "Public/CurveEditorMakeHoldFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "how many selected keys before the hold should start (must be > 1 for overshoot to work)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bHoldOnLast_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoldOnLast;
	static void NewProp_bOvershoot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOvershoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_bOvershootSprintConstant;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_bOvershootDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_bOvershootPrerollHistorySeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveEditorMakeHoldFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::NewProp_bHoldOnLast_SetBit(void* Obj)
{
	((UCurveEditorMakeHoldFilter*)Obj)->bHoldOnLast = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::NewProp_bHoldOnLast = { "bHoldOnLast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCurveEditorMakeHoldFilter), &Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::NewProp_bHoldOnLast_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHoldOnLast_MetaData), NewProp_bHoldOnLast_MetaData) };
void Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::NewProp_bOvershoot_SetBit(void* Obj)
{
	((UCurveEditorMakeHoldFilter*)Obj)->bOvershoot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::NewProp_bOvershoot = { "bOvershoot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCurveEditorMakeHoldFilter), &Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::NewProp_bOvershoot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOvershoot_MetaData), NewProp_bOvershoot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::NewProp_bOvershootSprintConstant = { "bOvershootSprintConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveEditorMakeHoldFilter, bOvershootSprintConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOvershootSprintConstant_MetaData), NewProp_bOvershootSprintConstant_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::NewProp_bOvershootDamping = { "bOvershootDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveEditorMakeHoldFilter, bOvershootDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOvershootDamping_MetaData), NewProp_bOvershootDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::NewProp_bOvershootPrerollHistorySeconds = { "bOvershootPrerollHistorySeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveEditorMakeHoldFilter, bOvershootPrerollHistorySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOvershootPrerollHistorySeconds_MetaData), NewProp_bOvershootPrerollHistorySeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::NewProp_bHoldOnLast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::NewProp_bOvershoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::NewProp_bOvershootSprintConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::NewProp_bOvershootDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::NewProp_bOvershootPrerollHistorySeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCurveEditorFilterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ThreepeatAnimTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::ClassParams = {
	&UCurveEditorMakeHoldFilter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCurveEditorMakeHoldFilter()
{
	if (!Z_Registration_Info_UClass_UCurveEditorMakeHoldFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveEditorMakeHoldFilter.OuterSingleton, Z_Construct_UClass_UCurveEditorMakeHoldFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCurveEditorMakeHoldFilter.OuterSingleton;
}
template<> THREEPEATANIMTOOLS_API UClass* StaticClass<UCurveEditorMakeHoldFilter>()
{
	return UCurveEditorMakeHoldFilter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveEditorMakeHoldFilter);
UCurveEditorMakeHoldFilter::~UCurveEditorMakeHoldFilter() {}
// End Class UCurveEditorMakeHoldFilter

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_climbingGame_Plugins_ThreepeatAnimTools_main_ThreepeatAnimTools_main_Source_ThreepeatAnimTools_Public_CurveEditorMakeHoldFilter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCurveEditorMakeHoldFilter, UCurveEditorMakeHoldFilter::StaticClass, TEXT("UCurveEditorMakeHoldFilter"), &Z_Registration_Info_UClass_UCurveEditorMakeHoldFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveEditorMakeHoldFilter), 2421766948U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_climbingGame_Plugins_ThreepeatAnimTools_main_ThreepeatAnimTools_main_Source_ThreepeatAnimTools_Public_CurveEditorMakeHoldFilter_h_111571733(TEXT("/Script/ThreepeatAnimTools"),
	Z_CompiledInDeferFile_FID_unreal_project_climbingGame_Plugins_ThreepeatAnimTools_main_ThreepeatAnimTools_main_Source_ThreepeatAnimTools_Public_CurveEditorMakeHoldFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_climbingGame_Plugins_ThreepeatAnimTools_main_ThreepeatAnimTools_main_Source_ThreepeatAnimTools_Public_CurveEditorMakeHoldFilter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
