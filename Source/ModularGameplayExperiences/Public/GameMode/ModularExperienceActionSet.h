// Copyright Chronicler.


#pragma once

#include "GameFeatureAction.h"
#include "ModularExperienceActionSet.generated.h"

UCLASS()
class UModularExperienceActionSet : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UModularExperienceActionSet();

#if WITH_EDITOR
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 3
	virtual EDataValidationResult IsDataValid(class FDataValidationContext& Context) const override;
#else
	virtual EDataValidationResult IsDataValid(TArray<FText>& ValidationErrors) override;
#endif
#endif

#if WITH_EDITORONLY_DATA
	virtual void UpdateAssetBundleData() override;
#endif

public:
	UPROPERTY(EditAnywhere, Instanced, Category="Actions to Perform")
	TArray<TObjectPtr<UGameFeatureAction>> Actions;

	// List of Game Feature Plugins this Action Set wants to have active
	UPROPERTY(EditAnywhere, Category="Feature Dependencies")
	TArray<FString> GameFeaturesToEnable;
};
