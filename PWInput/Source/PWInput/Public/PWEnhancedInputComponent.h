// copyright mkurtt96

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "PWInputConfig.h"
#include "PWEnhancedInputComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PWINPUT_API UPWEnhancedInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()

public:

	template<class UserClass, typename PressedFuncType, typename ReleasedFuncType, typename HeldFuncType>
	void BindAbilityActions(const UPWInputConfig* InputConfig, UserClass* Object, PressedFuncType PressedFunc, ReleasedFuncType ReleasedFunc, HeldFuncType HeldFunc);
};

template <class UserClass, typename PressedFuncType, typename ReleasedFuncType, typename HeldFuncType>
void UPWEnhancedInputComponent::BindAbilityActions(const UPWInputConfig* InputConfig, UserClass* Object, PressedFuncType PressedFunc, ReleasedFuncType ReleasedFunc, HeldFuncType HeldFunc)
{
	check(InputConfig);

	for (auto& Action : InputConfig->AbilityInputActions)
	{
		if (Action.Value && Action.Key.IsValid())
		{
			if (PressedFunc)
			{
				BindAction(Action.Value, ETriggerEvent::Started, Object, PressedFunc, Action.Key);
			}
			if (ReleasedFunc)
			{
				BindAction(Action.Value, ETriggerEvent::Completed, Object, ReleasedFunc, Action.Key);
			}
			if (HeldFunc)
			{
				BindAction(Action.Value, ETriggerEvent::Triggered, Object, HeldFunc, Action.Key);
			}
		}
	} 
}

