// Fill out your copyright notice in the Description page of Project Settings.


#include "Ability/SpellParams.h"

#include "GameFramework/GameState.h"
#include "GameFramework/PlayerState.h"
#include "Net/UnrealNetwork.h"

void USpellParamsBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	UObject::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(USpellParamsBase, SourcePlayerUniqueId, COND_InitialOnly);
	DOREPLIFETIME_CONDITION(USpellParamsBase, TargetCollisionTypes, COND_InitialOnly);
	DOREPLIFETIME_CONDITION(USpellParamsBase, AbilityLevel, COND_InitialOnly);
}

void USpellParamsBase::OnRep_UniqueId()
{
	const UObject* Outer = GetOuter();
	const UWorld* World = Outer->GetWorld();
	const AGameState* GameState = World->GetGameState<AGameState>();
	// if (APlayerState* PlayerState = Cast<APlayerState>(Cast<INetIdInterface>(GameState)->GetPlayerStateFromUniqueNetId(UniqueId)))
	// {
	// 	SourceASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(PlayerState);
	// 	if (PlayerState->GetPawn())
	// 		SourceAvatar = PlayerState->GetPawn();
	// }
}