// CORE BY DREAM MOON https://dmstudio.top

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FDreamCoreModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
