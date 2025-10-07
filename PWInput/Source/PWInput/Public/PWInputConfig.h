// copyright mkurtt96

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "PWInputConfig.generated.h"

/**
 * 
 */
UCLASS()
class PWINPUT_API UPWInputConfig : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const class UInputAction* FindAbilityInputActionForTag(const FGameplayTag& InputTag, bool bLogNotFound);
		
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TMap<FGameplayTag, UInputAction*> AbilityInputActions;
};
