// Fill out your copyright notice in the Description page of Project Settings.


#include "HudWidget.h"
#include "Components/ProgressBar.h"

void UHudWidget::UpdateHealthPercent(float HealthPercent)
{
	HealthBar->SetPercent(HealthPercent);
}