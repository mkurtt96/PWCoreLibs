// copyright mkurtt96

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Effectable.generated.h"

UINTERFACE(BlueprintType)
class UEffectable : public UInterface
{
	GENERATED_BODY()
};

class PWCONTRACTS_API IEffectable
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, Category="Hit")
	bool ApplyEffects(class USpellParams* Params);
};
