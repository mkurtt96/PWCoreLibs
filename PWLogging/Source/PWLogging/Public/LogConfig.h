// copyright Iompa

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LogConfig.generated.h"

/**
 * 
 */
UCLASS(Config=Game, Blueprintable, DefaultConfig)
class PWLOGGING_API ULogConfig : public UObject
{
	GENERATED_BODY()
public:
	ULogConfig()
	{
		LoadConfig();
	}
	
	UFUNCTION(BlueprintCallable, Category = "Debug")
	static ULogConfig* GetLogConfig();
	
	UPROPERTY(EditAnywhere, Config, BlueprintReadOnly, Category = "Debug Settings")
	bool bDebugFunc = false;

	UPROPERTY(EditAnywhere, Config, BlueprintReadOnly, Category = "Debug Settings")
	bool bDebugEconomy = false;

	UPROPERTY(EditAnywhere, Config, BlueprintReadOnly, Category = "Debug Settings")
	bool bDebugExtraDetails = false;
	
};
