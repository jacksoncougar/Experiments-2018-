// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRExpansionPlugin_init() {}
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnGripSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnDropSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnGripSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnDropSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/VRExpansionPlugin",
				PKG_CompiledIn | 0x00000000,
				0xAD5DF40C,
				0x6DA98628,
				SingletonFuncArray, ARRAY_COUNT(SingletonFuncArray),
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
