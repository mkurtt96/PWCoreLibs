// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MultiDataArray.h"
#include "UObject/Object.h"
#include "SpellParams.generated.h"

UENUM(BlueprintType, meta=(Bitflags))
enum class ERelationMask : uint8
{
	None = 0 UMETA(Hidden),
	Self = 1 << 0,
	Ally = 1 << 1,
	Enemy = 1 << 2,
	Neutral = 1 << 3,
	All = Self | Ally | Enemy | Neutral UMETA(Hidden)
};

ENUM_CLASS_FLAGS(ERelationMask)

/**
 * 
 */
UCLASS(BlueprintType)
class PWSHAREDTYPES_API USpellParamsBase : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<AActor> SourceAvatar = nullptr;
	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<AActor> ActorHit = nullptr;
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_UniqueId)
	FUniqueNetIdRepl SourcePlayerUniqueId = FUniqueNetIdRepl();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Bitmask, BitmaskEnum="/Script/PWSharedTypes.ERelationMask"), Replicated)
	uint8 TargetCollisionMask = (uint8)ERelationMask::All;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Bitmask, BitmaskEnum="/Script/PWSharedTypes.ERelationMask"))
	uint8 TargetEffectMask = (uint8)ERelationMask::All;
	UPROPERTY(BlueprintReadWrite, Replicated)
	float AbilityLevel = 0;

	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<UMultiDataArray> More = nullptr;

	UFUNCTION()
	virtual void OnRep_UniqueId();
	
	virtual bool IsSupportedForNetworking() const override { return true; }
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
