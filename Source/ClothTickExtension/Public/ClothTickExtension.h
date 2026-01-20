// Copyright (c) 2026 SHQ. All rights reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FClothTickExtensionModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
