// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OutputStrategyAbstract.generated.h"

/**
 * abstract class responsible for output
 */
UCLASS(Abstract, Blueprintable)
class BEHAVIORALPATTERNS_API UOutputStrategyAbstract : public UObject
{
	GENERATED_BODY()
	UWorld* GetWorld() const override
	{
		if (IsTemplate() || !GetOuter()) // We're the CDO or have no outer (?!).
		{
			return nullptr;
		}
		return GetOuter()->GetWorld();
	}
public:
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Output(const FString& Message);
};
