// copyright mkurtt96

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InputActionValue.h"
#include "Components/ActorComponent.h"
#include "PWInputRouter.generated.h"

class UInputMappingContext;
class UPWInputConfig;
class UPWEnhancedInputComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPWOnInputTagEvent, const FGameplayTag&, InputTag);

UCLASS(ClassGroup=(Input), meta=(BlueprintSpawnableComponent))
class PWINPUT_API UPWInputRouter : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TArray<UInputMappingContext*> InputMappingContexts;
	UPROPERTY(EditDefaultsOnly)
	UPWInputConfig* TaggedInputConfig = nullptr;

	UPROPERTY(BlueprintAssignable)
	FPWOnInputTagEvent OnTriggered;
	UPROPERTY(BlueprintAssignable)
	FPWOnInputTagEvent OnStarted;
	UPROPERTY(BlueprintAssignable)
	FPWOnInputTagEvent OnOngoing;
	UPROPERTY(BlueprintAssignable)
	FPWOnInputTagEvent OnCanceled;
	UPROPERTY(BlueprintAssignable)
	FPWOnInputTagEvent OnCompleted;

	void SetMappingContext(const ULocalPlayer* LocalPlayer);
	void BindAll(UInputComponent* InputComponent);

	UFUNCTION()
	virtual void HandleTriggered(const FGameplayTag Tag) { OnTriggered.Broadcast(Tag); }
	UFUNCTION()
	virtual void HandleStarted(const FGameplayTag Tag) { OnStarted.Broadcast(Tag); }
	UFUNCTION()
	virtual void HandleOngoing(const FGameplayTag Tag) { OnOngoing.Broadcast(Tag); }
	UFUNCTION()
	virtual void HandleCanceled(const FGameplayTag Tag) { OnCanceled.Broadcast(Tag); }
	UFUNCTION()
	virtual void HandleCompleted(const FGameplayTag Tag) { OnCompleted.Broadcast(Tag); }
};
