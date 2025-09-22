// copyright mkurtt96

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PWEffectReceiverInterface.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UPWEffectReceiverInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PWCONTRACTS_API IPWEffectReceiverInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Effects")
	UObject* GetEffectReceiver();
};
