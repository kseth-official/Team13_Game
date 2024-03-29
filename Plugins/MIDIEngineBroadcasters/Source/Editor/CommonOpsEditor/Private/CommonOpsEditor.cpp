// Copyright Algosyntax 2023. All Rights Reserved.

#include "CommonOpsEditor.h"

#include "Editor.h"

#define LOCTEXT_NAMESPACE "FCommonOpsEditorModule"

void FCommonOpsEditorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	FEditorDelegates::EndPIE.AddRaw(&ClientAssetsAuthSystem,&FAxClientAssetsAuthNotifications::ShowDelayedClientAssetNotifications);
}

void FCommonOpsEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	///FEditorDelegates::EndPIE.Remove()
}



#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCommonOpsEditorModule, CommonOpsEditor)