// copyright mkurtt96

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InputActionValue.h"
#include "Components/ActorComponent.h"
#include "PWInputRouter.generated.h"

class UPWInputConfig;
class UPWEnhancedInputComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPWOnInputTagEvent, FGameplayTag, InputTag);

UCLASS(ClassGroup=(Input), meta=(BlueprintSpawnableComponent))
class PWINPUT_API UPWInputRouter : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	UPWInputConfig* InputConfig = nullptr;

	UPROPERTY(BlueprintAssignable)
	FPWOnInputTagEvent OnStarted;
	UPROPERTY(BlueprintAssignable)
	FPWOnInputTagEvent OnTriggered;
	UPROPERTY(BlueprintAssignable)
	FPWOnInputTagEvent OnCompleted;

	void BindAll(UPWEnhancedInputComponent* EIC);

	UFUNCTION()
	virtual void HandlePressed(const FGameplayTag Tag) { OnStarted.Broadcast(Tag); }
	UFUNCTION()
	virtual void HandleHeld(const FGameplayTag Tag) { OnTriggered.Broadcast(Tag); }
	UFUNCTION()
	virtual void HandleReleased(const FGameplayTag Tag) { OnCompleted.Broadcast(Tag); }
};
