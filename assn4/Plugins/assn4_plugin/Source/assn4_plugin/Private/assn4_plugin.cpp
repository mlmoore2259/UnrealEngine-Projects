// Copyright Epic Games, Inc. All Rights Reserved.

#include "assn4_plugin.h"

#define LOCTEXT_NAMESPACE "Fassn4_pluginModule"

void Fassn4_pluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void Fassn4_pluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(Fassn4_pluginModule, assn4_plugin)