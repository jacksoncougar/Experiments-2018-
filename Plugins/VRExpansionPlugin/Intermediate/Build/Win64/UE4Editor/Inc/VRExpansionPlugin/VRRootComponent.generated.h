// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREXPANSIONPLUGIN_VRRootComponent_generated_h
#error "VRRootComponent.generated.h already included, missing '#pragma once' in VRRootComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRRootComponent_generated_h

#define Experiments_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCapsuleHalfHeightVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCapsuleHalfHeightVR(Z_Param_HalfHeight,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCapsuleSizeVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewHalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCapsuleSizeVR(Z_Param_NewRadius,Z_Param_NewHalfHeight,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	}


#define Experiments_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCapsuleHalfHeightVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCapsuleHalfHeightVR(Z_Param_HalfHeight,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCapsuleSizeVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewHalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCapsuleSizeVR(Z_Param_NewRadius,Z_Param_NewHalfHeight,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	}


#define Experiments_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRRootComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRRootComponent(); \
public: \
	DECLARE_CLASS(UVRRootComponent, UCapsuleComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRRootComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UVRRootComponent*>(this); }


#define Experiments_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUVRRootComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRRootComponent(); \
public: \
	DECLARE_CLASS(UVRRootComponent, UCapsuleComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRRootComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UVRRootComponent*>(this); }


#define Experiments_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRRootComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRRootComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRRootComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRRootComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRRootComponent(UVRRootComponent&&); \
	NO_API UVRRootComponent(const UVRRootComponent&); \
public:


#define Experiments_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRRootComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRRootComponent(UVRRootComponent&&); \
	NO_API UVRRootComponent(const UVRRootComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRRootComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRRootComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRRootComponent)


#define Experiments_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_29_PRIVATE_PROPERTY_OFFSET
#define Experiments_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_26_PROLOG
#define Experiments_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Experiments_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_29_PRIVATE_PROPERTY_OFFSET \
	Experiments_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_29_RPC_WRAPPERS \
	Experiments_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_29_INCLASS \
	Experiments_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Experiments_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Experiments_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_29_PRIVATE_PROPERTY_OFFSET \
	Experiments_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Experiments_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_29_INCLASS_NO_PURE_DECLS \
	Experiments_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VRRootComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Experiments_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
