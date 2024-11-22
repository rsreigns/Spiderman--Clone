// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThreepeatAnimTools/Public/ThreepeatAnimToolsBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThreepeatAnimToolsBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
THREEPEATANIMTOOLS_API UClass* Z_Construct_UClass_UThreepeatAnimToolsBPLibrary();
THREEPEATANIMTOOLS_API UClass* Z_Construct_UClass_UThreepeatAnimToolsBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThreepeatAnimTools();
// End Cross Module References

// Begin Class UThreepeatAnimToolsBPLibrary Function ApplyTimeDilationToSelection
struct Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ApplyTimeDilationToSelection_Statics
{
	struct ThreepeatAnimToolsBPLibrary_eventApplyTimeDilationToSelection_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ThreepeatAnimToolsTesting" },
		{ "DisplayName", "Apply Time Dilation to selected keys" },
		{ "Keywords", "ThreepeatAnimTools time dilation curveeditor sequencer" },
		{ "ModuleRelativePath", "Public/ThreepeatAnimToolsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ApplyTimeDilationToSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreepeatAnimToolsBPLibrary_eventApplyTimeDilationToSelection_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ApplyTimeDilationToSelection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ApplyTimeDilationToSelection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ApplyTimeDilationToSelection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ApplyTimeDilationToSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThreepeatAnimToolsBPLibrary, nullptr, "ApplyTimeDilationToSelection", nullptr, nullptr, Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ApplyTimeDilationToSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ApplyTimeDilationToSelection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ApplyTimeDilationToSelection_Statics::ThreepeatAnimToolsBPLibrary_eventApplyTimeDilationToSelection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ApplyTimeDilationToSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ApplyTimeDilationToSelection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ApplyTimeDilationToSelection_Statics::ThreepeatAnimToolsBPLibrary_eventApplyTimeDilationToSelection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ApplyTimeDilationToSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ApplyTimeDilationToSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThreepeatAnimToolsBPLibrary::execApplyTimeDilationToSelection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UThreepeatAnimToolsBPLibrary::ApplyTimeDilationToSelection();
	P_NATIVE_END;
}
// End Class UThreepeatAnimToolsBPLibrary Function ApplyTimeDilationToSelection

// Begin Class UThreepeatAnimToolsBPLibrary Function SelectionSetToString
struct Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_SelectionSetToString_Statics
{
	struct ThreepeatAnimToolsBPLibrary_eventSelectionSetToString_Parms
	{
		TArray<FName> Controls;
		FString SetName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ThreepeatAnimTools" },
		{ "DisplayName", "Selection Set To CSV String" },
		{ "Keywords", "ThreepeatAnimTools selection set csv string" },
		{ "ModuleRelativePath", "Public/ThreepeatAnimToolsBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controls_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Controls_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Controls;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_SelectionSetToString_Statics::NewProp_Controls_Inner = { "Controls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_SelectionSetToString_Statics::NewProp_Controls = { "Controls", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreepeatAnimToolsBPLibrary_eventSelectionSetToString_Parms, Controls), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controls_MetaData), NewProp_Controls_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_SelectionSetToString_Statics::NewProp_SetName = { "SetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreepeatAnimToolsBPLibrary_eventSelectionSetToString_Parms, SetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetName_MetaData), NewProp_SetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_SelectionSetToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreepeatAnimToolsBPLibrary_eventSelectionSetToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_SelectionSetToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_SelectionSetToString_Statics::NewProp_Controls_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_SelectionSetToString_Statics::NewProp_Controls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_SelectionSetToString_Statics::NewProp_SetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_SelectionSetToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_SelectionSetToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_SelectionSetToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThreepeatAnimToolsBPLibrary, nullptr, "SelectionSetToString", nullptr, nullptr, Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_SelectionSetToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_SelectionSetToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_SelectionSetToString_Statics::ThreepeatAnimToolsBPLibrary_eventSelectionSetToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_SelectionSetToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_SelectionSetToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_SelectionSetToString_Statics::ThreepeatAnimToolsBPLibrary_eventSelectionSetToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_SelectionSetToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_SelectionSetToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThreepeatAnimToolsBPLibrary::execSelectionSetToString)
{
	P_GET_TARRAY_REF(FName,Z_Param_Out_Controls);
	P_GET_PROPERTY(FStrProperty,Z_Param_SetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UThreepeatAnimToolsBPLibrary::SelectionSetToString(Z_Param_Out_Controls,Z_Param_SetName);
	P_NATIVE_END;
}
// End Class UThreepeatAnimToolsBPLibrary Function SelectionSetToString

// Begin Class UThreepeatAnimToolsBPLibrary Function ThreepeatAnimToolsClipboardInsert
struct Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardInsert_Statics
{
	struct ThreepeatAnimToolsBPLibrary_eventThreepeatAnimToolsClipboardInsert_Parms
	{
		FString contentsToPaste;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ThreepeatAnimToolsTesting" },
		{ "DisplayName", "Clipboard Insert" },
		{ "Keywords", "ThreepeatAnimTools sample test testing" },
		{ "ModuleRelativePath", "Public/ThreepeatAnimToolsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_contentsToPaste;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardInsert_Statics::NewProp_contentsToPaste = { "contentsToPaste", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreepeatAnimToolsBPLibrary_eventThreepeatAnimToolsClipboardInsert_Parms, contentsToPaste), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardInsert_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardInsert_Statics::NewProp_contentsToPaste,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardInsert_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardInsert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThreepeatAnimToolsBPLibrary, nullptr, "ThreepeatAnimToolsClipboardInsert", nullptr, nullptr, Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardInsert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardInsert_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardInsert_Statics::ThreepeatAnimToolsBPLibrary_eventThreepeatAnimToolsClipboardInsert_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardInsert_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardInsert_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardInsert_Statics::ThreepeatAnimToolsBPLibrary_eventThreepeatAnimToolsClipboardInsert_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardInsert()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardInsert_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThreepeatAnimToolsBPLibrary::execThreepeatAnimToolsClipboardInsert)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_contentsToPaste);
	P_FINISH;
	P_NATIVE_BEGIN;
	UThreepeatAnimToolsBPLibrary::ThreepeatAnimToolsClipboardInsert(Z_Param_contentsToPaste);
	P_NATIVE_END;
}
// End Class UThreepeatAnimToolsBPLibrary Function ThreepeatAnimToolsClipboardInsert

// Begin Class UThreepeatAnimToolsBPLibrary Function ThreepeatAnimToolsClipboardThing
struct Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardThing_Statics
{
	struct ThreepeatAnimToolsBPLibrary_eventThreepeatAnimToolsClipboardThing_Parms
	{
		float Param;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ThreepeatAnimToolsTesting" },
		{ "DisplayName", "Clipboard stuff" },
		{ "Keywords", "ThreepeatAnimTools sample test testing" },
		{ "ModuleRelativePath", "Public/ThreepeatAnimToolsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardThing_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreepeatAnimToolsBPLibrary_eventThreepeatAnimToolsClipboardThing_Parms, Param), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardThing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreepeatAnimToolsBPLibrary_eventThreepeatAnimToolsClipboardThing_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardThing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardThing_Statics::NewProp_Param,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardThing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardThing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardThing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThreepeatAnimToolsBPLibrary, nullptr, "ThreepeatAnimToolsClipboardThing", nullptr, nullptr, Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardThing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardThing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardThing_Statics::ThreepeatAnimToolsBPLibrary_eventThreepeatAnimToolsClipboardThing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardThing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardThing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardThing_Statics::ThreepeatAnimToolsBPLibrary_eventThreepeatAnimToolsClipboardThing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardThing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardThing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThreepeatAnimToolsBPLibrary::execThreepeatAnimToolsClipboardThing)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UThreepeatAnimToolsBPLibrary::ThreepeatAnimToolsClipboardThing(Z_Param_Param);
	P_NATIVE_END;
}
// End Class UThreepeatAnimToolsBPLibrary Function ThreepeatAnimToolsClipboardThing

// Begin Class UThreepeatAnimToolsBPLibrary Function ThreepeatAnimToolsViewerSnapshot
struct Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsViewerSnapshot_Statics
{
	struct ThreepeatAnimToolsBPLibrary_eventThreepeatAnimToolsViewerSnapshot_Parms
	{
		FString fname;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ThreepeatAnimToolsTesting" },
		{ "DisplayName", "Take Snapshot of Viewer" },
		{ "Keywords", "ThreepeatAnimTools sample test testing" },
		{ "ModuleRelativePath", "Public/ThreepeatAnimToolsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_fname;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsViewerSnapshot_Statics::NewProp_fname = { "fname", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreepeatAnimToolsBPLibrary_eventThreepeatAnimToolsViewerSnapshot_Parms, fname), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsViewerSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsViewerSnapshot_Statics::NewProp_fname,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsViewerSnapshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsViewerSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThreepeatAnimToolsBPLibrary, nullptr, "ThreepeatAnimToolsViewerSnapshot", nullptr, nullptr, Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsViewerSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsViewerSnapshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsViewerSnapshot_Statics::ThreepeatAnimToolsBPLibrary_eventThreepeatAnimToolsViewerSnapshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsViewerSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsViewerSnapshot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsViewerSnapshot_Statics::ThreepeatAnimToolsBPLibrary_eventThreepeatAnimToolsViewerSnapshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsViewerSnapshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsViewerSnapshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThreepeatAnimToolsBPLibrary::execThreepeatAnimToolsViewerSnapshot)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_fname);
	P_FINISH;
	P_NATIVE_BEGIN;
	UThreepeatAnimToolsBPLibrary::ThreepeatAnimToolsViewerSnapshot(Z_Param_fname);
	P_NATIVE_END;
}
// End Class UThreepeatAnimToolsBPLibrary Function ThreepeatAnimToolsViewerSnapshot

// Begin Class UThreepeatAnimToolsBPLibrary Function ThreepeatExecuteAlignToKeyFilter
struct Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteAlignToKeyFilter_Statics
{
	struct ThreepeatAnimToolsBPLibrary_eventThreepeatExecuteAlignToKeyFilter_Parms
	{
		bool bAlignToFirst;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ThreepeatAnimTools" },
		{ "CPP_Default_bAlignToFirst", "false" },
		{ "DisplayName", "Execute Align to First/Last Key" },
		{ "Keywords", "ThreepeatAnimTools align first last key filter" },
		{ "ModuleRelativePath", "Public/ThreepeatAnimToolsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAlignToFirst_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignToFirst;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteAlignToKeyFilter_Statics::NewProp_bAlignToFirst_SetBit(void* Obj)
{
	((ThreepeatAnimToolsBPLibrary_eventThreepeatExecuteAlignToKeyFilter_Parms*)Obj)->bAlignToFirst = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteAlignToKeyFilter_Statics::NewProp_bAlignToFirst = { "bAlignToFirst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ThreepeatAnimToolsBPLibrary_eventThreepeatExecuteAlignToKeyFilter_Parms), &Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteAlignToKeyFilter_Statics::NewProp_bAlignToFirst_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteAlignToKeyFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreepeatAnimToolsBPLibrary_eventThreepeatExecuteAlignToKeyFilter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteAlignToKeyFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteAlignToKeyFilter_Statics::NewProp_bAlignToFirst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteAlignToKeyFilter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteAlignToKeyFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteAlignToKeyFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThreepeatAnimToolsBPLibrary, nullptr, "ThreepeatExecuteAlignToKeyFilter", nullptr, nullptr, Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteAlignToKeyFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteAlignToKeyFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteAlignToKeyFilter_Statics::ThreepeatAnimToolsBPLibrary_eventThreepeatExecuteAlignToKeyFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteAlignToKeyFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteAlignToKeyFilter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteAlignToKeyFilter_Statics::ThreepeatAnimToolsBPLibrary_eventThreepeatExecuteAlignToKeyFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteAlignToKeyFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteAlignToKeyFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThreepeatAnimToolsBPLibrary::execThreepeatExecuteAlignToKeyFilter)
{
	P_GET_UBOOL(Z_Param_bAlignToFirst);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UThreepeatAnimToolsBPLibrary::ThreepeatExecuteAlignToKeyFilter(Z_Param_bAlignToFirst);
	P_NATIVE_END;
}
// End Class UThreepeatAnimToolsBPLibrary Function ThreepeatExecuteAlignToKeyFilter

// Begin Class UThreepeatAnimToolsBPLibrary Function ThreepeatExecuteEulerFilter
struct Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteEulerFilter_Statics
{
	struct ThreepeatAnimToolsBPLibrary_eventThreepeatExecuteEulerFilter_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ThreepeatAnimTools" },
		{ "DisplayName", "Execute Euler Filter" },
		{ "Keywords", "ThreepeatAnimTools euler filter" },
		{ "ModuleRelativePath", "Public/ThreepeatAnimToolsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteEulerFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreepeatAnimToolsBPLibrary_eventThreepeatExecuteEulerFilter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteEulerFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteEulerFilter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteEulerFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteEulerFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThreepeatAnimToolsBPLibrary, nullptr, "ThreepeatExecuteEulerFilter", nullptr, nullptr, Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteEulerFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteEulerFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteEulerFilter_Statics::ThreepeatAnimToolsBPLibrary_eventThreepeatExecuteEulerFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteEulerFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteEulerFilter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteEulerFilter_Statics::ThreepeatAnimToolsBPLibrary_eventThreepeatExecuteEulerFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteEulerFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteEulerFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThreepeatAnimToolsBPLibrary::execThreepeatExecuteEulerFilter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UThreepeatAnimToolsBPLibrary::ThreepeatExecuteEulerFilter();
	P_NATIVE_END;
}
// End Class UThreepeatAnimToolsBPLibrary Function ThreepeatExecuteEulerFilter

// Begin Class UThreepeatAnimToolsBPLibrary
void UThreepeatAnimToolsBPLibrary::StaticRegisterNativesUThreepeatAnimToolsBPLibrary()
{
	UClass* Class = UThreepeatAnimToolsBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyTimeDilationToSelection", &UThreepeatAnimToolsBPLibrary::execApplyTimeDilationToSelection },
		{ "SelectionSetToString", &UThreepeatAnimToolsBPLibrary::execSelectionSetToString },
		{ "ThreepeatAnimToolsClipboardInsert", &UThreepeatAnimToolsBPLibrary::execThreepeatAnimToolsClipboardInsert },
		{ "ThreepeatAnimToolsClipboardThing", &UThreepeatAnimToolsBPLibrary::execThreepeatAnimToolsClipboardThing },
		{ "ThreepeatAnimToolsViewerSnapshot", &UThreepeatAnimToolsBPLibrary::execThreepeatAnimToolsViewerSnapshot },
		{ "ThreepeatExecuteAlignToKeyFilter", &UThreepeatAnimToolsBPLibrary::execThreepeatExecuteAlignToKeyFilter },
		{ "ThreepeatExecuteEulerFilter", &UThreepeatAnimToolsBPLibrary::execThreepeatExecuteEulerFilter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThreepeatAnimToolsBPLibrary);
UClass* Z_Construct_UClass_UThreepeatAnimToolsBPLibrary_NoRegister()
{
	return UThreepeatAnimToolsBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UThreepeatAnimToolsBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
#endif
		{ "IncludePath", "ThreepeatAnimToolsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ThreepeatAnimToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ApplyTimeDilationToSelection, "ApplyTimeDilationToSelection" }, // 3950091789
		{ &Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_SelectionSetToString, "SelectionSetToString" }, // 685898207
		{ &Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardInsert, "ThreepeatAnimToolsClipboardInsert" }, // 3836139890
		{ &Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsClipboardThing, "ThreepeatAnimToolsClipboardThing" }, // 1377275356
		{ &Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatAnimToolsViewerSnapshot, "ThreepeatAnimToolsViewerSnapshot" }, // 4261361264
		{ &Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteAlignToKeyFilter, "ThreepeatExecuteAlignToKeyFilter" }, // 582900129
		{ &Z_Construct_UFunction_UThreepeatAnimToolsBPLibrary_ThreepeatExecuteEulerFilter, "ThreepeatExecuteEulerFilter" }, // 2190653409
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThreepeatAnimToolsBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UThreepeatAnimToolsBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ThreepeatAnimTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThreepeatAnimToolsBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UThreepeatAnimToolsBPLibrary_Statics::ClassParams = {
	&UThreepeatAnimToolsBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThreepeatAnimToolsBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UThreepeatAnimToolsBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UThreepeatAnimToolsBPLibrary()
{
	if (!Z_Registration_Info_UClass_UThreepeatAnimToolsBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThreepeatAnimToolsBPLibrary.OuterSingleton, Z_Construct_UClass_UThreepeatAnimToolsBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UThreepeatAnimToolsBPLibrary.OuterSingleton;
}
template<> THREEPEATANIMTOOLS_API UClass* StaticClass<UThreepeatAnimToolsBPLibrary>()
{
	return UThreepeatAnimToolsBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UThreepeatAnimToolsBPLibrary);
UThreepeatAnimToolsBPLibrary::~UThreepeatAnimToolsBPLibrary() {}
// End Class UThreepeatAnimToolsBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_climbingGame_Plugins_ThreepeatAnimTools_main_ThreepeatAnimTools_main_Source_ThreepeatAnimTools_Public_ThreepeatAnimToolsBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UThreepeatAnimToolsBPLibrary, UThreepeatAnimToolsBPLibrary::StaticClass, TEXT("UThreepeatAnimToolsBPLibrary"), &Z_Registration_Info_UClass_UThreepeatAnimToolsBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThreepeatAnimToolsBPLibrary), 3911810606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_climbingGame_Plugins_ThreepeatAnimTools_main_ThreepeatAnimTools_main_Source_ThreepeatAnimTools_Public_ThreepeatAnimToolsBPLibrary_h_4074233221(TEXT("/Script/ThreepeatAnimTools"),
	Z_CompiledInDeferFile_FID_unreal_project_climbingGame_Plugins_ThreepeatAnimTools_main_ThreepeatAnimTools_main_Source_ThreepeatAnimTools_Public_ThreepeatAnimToolsBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_climbingGame_Plugins_ThreepeatAnimTools_main_ThreepeatAnimTools_main_Source_ThreepeatAnimTools_Public_ThreepeatAnimToolsBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
