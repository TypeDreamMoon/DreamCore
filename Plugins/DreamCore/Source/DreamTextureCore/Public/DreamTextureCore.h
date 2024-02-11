// CORE BY DREAM MOON https://dmstudio.top

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FDreamTextureCoreModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
