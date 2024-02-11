// ByDreamMoonStudio. https://dmstudio.top - DREAM MOON 2024 -

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DreamGameplayInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UDreamGameplayInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DREAMGAMEPLAY_API IDreamGameplayInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, Category = "DreamGameplayInterface", BlueprintNativeEvent)
	void i_SetDebugMode(bool NewMode);
};
