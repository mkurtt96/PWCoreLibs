// copyright mkurtt96


#include "PWInputRouter.h"
#include "PWEnhancedInputComponent.h"


void UPWInputRouter::BindAll(UPWEnhancedInputComponent* EIC)
{
	if (!EIC || !InputConfig) return;
	EIC->BindAbilityActions(InputConfig, this, &ThisClass::HandlePressed, &ThisClass::HandleReleased, &ThisClass::HandleHeld);
}
