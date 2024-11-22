// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThreepeatAnimTools/Public/CurveEditorAlignToLastKeyFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveEditorAlignToLastKeyFilter() {}

// Begin Cross Module References
CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorFilterBase();
THREEPEATANIMTOOLS_API UClass* Z_Construct_UClass_UCurveEditorAlignToLastKeyFilter();
THREEPEATANIMTOOLS_API UClass* Z_Construct_UClass_UCurveEditorAlignToLastKeyFilter_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThreepeatAnimTools();
// End Cross Module References

// Begin Class UCurveEditorAlignToLastKeyFilter
void UCurveEditorAlignToLastKeyFilter::StaticRegisterNativesUCurveEditorAlignToLastKeyFilter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveEditorAlignToLastKeyFilter);
UClass* Z_Construct_UClass_UCurveEditorAlignToLastKeyFilter_NoRegister()
{
	return UCurveEditorAlignToLastKeyFilter::StaticClass();
}
struct Z_Construct_UClass_UCurveEditorAlignToLastKeyFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Threepeat - Align to First/Last Key" },
		{ "IncludePath", "CurveEditorAlignToLastKeyFilter.h" },
		{ "ModuleRelativePath", "Public/CurveEditorAlignToLastKeyFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlignToFirst_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, Align to selected keys to line up with the first (lowest frame number) key.  Defaults to the last key. */" },
#endif
		{ "ModuleRelativePath", "Public/CurveEditorAlignToLastKeyFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, Align to selected keys to line up with the first (lowest frame number) key.  Defaults to the last key." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bAlignToFirst_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignToFirst;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveEditorAlignToLastKeyFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCurveEditorAlignToLastKeyFilter_Statics::NewProp_bAlignToFirst_SetBit(void* Obj)
{
	((UCurveEditorAlignToLastKeyFilter*)Obj)->bAlignToFirst = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveEditorAlignToLastKeyFilter_Statics::NewProp_bAlignToFirst = { "bAlignToFirst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCurveEditorAlignToLastKeyFilter), &Z_Construct_UClass_UCurveEditorAlignToLastKeyFilter_Statics::NewProp_bAlignToFirst_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlignToFirst_MetaData), NewProp_bAlignToFirst_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveEditorAlignToLastKeyFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorAlignToLastKeyFilter_Statics::NewProp_bAlignToFirst,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorAlignToLastKeyFilter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCurveEditorAlignToLastKeyFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCurveEditorFilterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ThreepeatAnimTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorAlignToLastKeyFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveEditorAlignToLastKeyFilter_Statics::ClassParams = {
	&UCurveEditorAlignToLastKeyFilter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCurveEditorAlignToLastKeyFilter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorAlignToLastKeyFilter_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorAlignToLastKeyFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UCurveEditorAlignToLastKeyFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCurveEditorAlignToLastKeyFilter()
{
	if (!Z_Registration_Info_UClass_UCurveEditorAlignToLastKeyFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveEditorAlignToLastKeyFilter.OuterSingleton, Z_Construct_UClass_UCurveEditorAlignToLastKeyFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCurveEditorAlignToLastKeyFilter.OuterSingleton;
}
template<> THREEPEATANIMTOOLS_API UClass* StaticClass<UCurveEditorAlignToLastKeyFilter>()
{
	return UCurveEditorAlignToLastKeyFilter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveEditorAlignToLastKeyFilter);
UCurveEditorAlignToLastKeyFilter::~UCurveEditorAlignToLastKeyFilter() {}
// End Class UCurveEditorAlignToLastKeyFilter

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_climbingGame_Plugins_ThreepeatAnimTools_main_ThreepeatAnimTools_main_Source_ThreepeatAnimTools_Public_CurveEditorAlignToLastKeyFilter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCurveEditorAlignToLastKeyFilter, UCurveEditorAlignToLastKeyFilter::StaticClass, TEXT("UCurveEditorAlignToLastKeyFilter"), &Z_Registration_Info_UClass_UCurveEditorAlignToLastKeyFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveEditorAlignToLastKeyFilter), 2577176674U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_climbingGame_Plugins_ThreepeatAnimTools_main_ThreepeatAnimTools_main_Source_ThreepeatAnimTools_Public_CurveEditorAlignToLastKeyFilter_h_2588354596(TEXT("/Script/ThreepeatAnimTools"),
	Z_CompiledInDeferFile_FID_unreal_project_climbingGame_Plugins_ThreepeatAnimTools_main_ThreepeatAnimTools_main_Source_ThreepeatAnimTools_Public_CurveEditorAlignToLastKeyFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_climbingGame_Plugins_ThreepeatAnimTools_main_ThreepeatAnimTools_main_Source_ThreepeatAnimTools_Public_CurveEditorAlignToLastKeyFilter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
