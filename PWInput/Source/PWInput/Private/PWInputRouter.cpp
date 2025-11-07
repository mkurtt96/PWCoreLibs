// copyright mkurtt96


#include "PWInputRouter.h"

#include "EnhancedInputSubsystems.h"
#include "PWEnhancedInputComponent.h"


void UPWInputRouter::SetMappingContext(const ULocalPlayer* LocalPlayer)
{
	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer);
	for (const UInputMappingContext* CurrentContext : InputMappingContexts)
	{
		Subsystem->AddMappingContext(CurrentContext, 0);
	}
}

void UPWInputRouter::BindAll(UInputComponent* InputComponent)
{
	UPWEnhancedInputComponent* EIC = CastChecked<UPWEnhancedInputComponent>(InputComponent);
	if (!EIC || !TaggedInputConfig) return;
	EIC->BindAbilityActions(TaggedInputConfig, this, &ThisClass::HandleTriggered, &ThisClass::HandleStarted, &ThisClass::HandleOngoing, &ThisClass::HandleCanceled, &ThisClass::HandleCompleted);
}
