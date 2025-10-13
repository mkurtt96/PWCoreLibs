﻿#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PWSpellParamsInterface.generated.h"


class USpellParamsBase;

UINTERFACE(BlueprintType, Blueprintable)
class UPWSpellParamsInterface : public UInterface
{
	GENERATED_BODY()
};

class PWCONTRACTS_API IPWSpellParamsInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Spell")
	void SetSpellParams(USpellParamsBase* Params);
};
