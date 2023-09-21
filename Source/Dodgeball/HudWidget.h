// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HudWidget.generated.h"

/**
 * 
 */
UCLASS()
class DODGEBALL_API UHudWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	void UpdateHealthPercent(float HealthPercent);

	UPROPERTY(meta = (BindWidget))
		class UProgressBar* HealthBar;

};

