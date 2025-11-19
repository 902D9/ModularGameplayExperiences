// Copyright Chronicler.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ModularVerbMessageHelpers.generated.h"

struct FGameplayCueParameters;
struct FModularVerbMessage;

class APlayerController;
class APlayerState;
class UObject;
struct FFrame;
/**
 * 
 */
UCLASS()
class MODULARGAMEPLAYEXPERIENCES_API UModularVerbMessageHelpers : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable)
	static APlayerState* GetPlayerStateFromObject(UObject* Object);

	UFUNCTION(BlueprintCallable)
	static APlayerController* GetPlayerControllerFromObject(UObject* Object);

	UFUNCTION(BlueprintCallable)
	static FGameplayCueParameters VerbMessageToCueParameters(const FModularVerbMessage& Message);

	UFUNCTION(BlueprintCallable)
	static FModularVerbMessage CueParametersToVerbMessage(const FGameplayCueParameters& Params);
};
