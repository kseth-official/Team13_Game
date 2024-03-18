// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/AxMidiListenerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IAxMidiBroadcaster;
class UAxMidiNote;
class UAxMidiPlayhead;
struct FAxMidiChord;
#ifdef AXMIDIBROADCASTERS_AxMidiListenerComponent_generated_h
#error "AxMidiListenerComponent.generated.h already included, missing '#pragma once' in AxMidiListenerComponent.h"
#endif
#define AXMIDIBROADCASTERS_AxMidiListenerComponent_generated_h

#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiListenerComponent_h_20_SPARSE_DATA
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiListenerComponent_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiListenerComponent_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiListenerComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBroadcastMidiNoteOff); \
	DECLARE_FUNCTION(execBroadcastMidiNoteOn); \
	DECLARE_FUNCTION(execOnSubsystemBPMEvent); \
	DECLARE_FUNCTION(execOnSubsystemMidiNoteOff); \
	DECLARE_FUNCTION(execOnSubsystemChordOn);


#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiListenerComponent_h_20_ACCESSORS
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiListenerComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAxMidiListenerComponent(); \
	friend struct Z_Construct_UClass_UAxMidiListenerComponent_Statics; \
public: \
	DECLARE_CLASS(UAxMidiListenerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AxMidiBroadcasters"), NO_API) \
	DECLARE_SERIALIZER(UAxMidiListenerComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAxMidiListenerComponent*>(this); }


#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiListenerComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAxMidiListenerComponent(UAxMidiListenerComponent&&); \
	NO_API UAxMidiListenerComponent(const UAxMidiListenerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAxMidiListenerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAxMidiListenerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAxMidiListenerComponent) \
	NO_API virtual ~UAxMidiListenerComponent();


#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiListenerComponent_h_17_PROLOG
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiListenerComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiListenerComponent_h_20_SPARSE_DATA \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiListenerComponent_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiListenerComponent_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiListenerComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiListenerComponent_h_20_ACCESSORS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiListenerComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiListenerComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AXMIDIBROADCASTERS_API UClass* StaticClass<class UAxMidiListenerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiListenerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
