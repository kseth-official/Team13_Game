// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/AxMidiBroadcastersSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IAxMidiBroadcaster;
class UAxMidiNote;
class UAxMidiPlayhead;
struct FAxMidiChord;
#ifdef AXMIDIBROADCASTERS_AxMidiBroadcastersSubsystem_generated_h
#error "AxMidiBroadcastersSubsystem.generated.h already included, missing '#pragma once' in AxMidiBroadcastersSubsystem.h"
#endif
#define AXMIDIBROADCASTERS_AxMidiBroadcastersSubsystem_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_19_DELEGATE \
AXMIDIBROADCASTERS_API void FAxMidiNoteDelegate_DelegateWrapper(const FMulticastScriptDelegate& AxMidiNoteDelegate, const FString& TrackName, UAxMidiNote* MidiNote, UAxMidiPlayhead* PlayHead, const TScriptInterface<IAxMidiBroadcaster>& Broadcaster);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_22_DELEGATE \
AXMIDIBROADCASTERS_API void FAxMidiChordDelegate_DelegateWrapper(const FMulticastScriptDelegate& AxMidiChordDelegate, FAxMidiChord MidiChord, UAxMidiPlayhead* PlayHead, const TScriptInterface<IAxMidiBroadcaster>& Broadcaster);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_24_DELEGATE \
AXMIDIBROADCASTERS_API void FAxMidiCurveDelegate_DelegateWrapper(const FMulticastScriptDelegate& AxMidiCurveDelegate, float CurveValue, UAxMidiPlayhead* PlayHead, const TScriptInterface<IAxMidiBroadcaster>& Broadcaster);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_36_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_36_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_36_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_36_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_36_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAxMidiBroadcastersSubsystem(); \
	friend struct Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAxMidiBroadcastersSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AxMidiBroadcasters"), NO_API) \
	DECLARE_SERIALIZER(UAxMidiBroadcastersSubsystem)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAxMidiBroadcastersSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAxMidiBroadcastersSubsystem(UAxMidiBroadcastersSubsystem&&); \
	NO_API UAxMidiBroadcastersSubsystem(const UAxMidiBroadcastersSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAxMidiBroadcastersSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAxMidiBroadcastersSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAxMidiBroadcastersSubsystem) \
	NO_API virtual ~UAxMidiBroadcastersSubsystem();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_33_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_36_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_36_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_36_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_36_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_36_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AXMIDIBROADCASTERS_API UClass* StaticClass<class UAxMidiBroadcastersSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
