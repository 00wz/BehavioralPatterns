// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Observer.generated.h"

// This class does not need to be modified.
UINTERFACE(Blueprintable)
class UObserver : public UInterface
{
	GENERATED_BODY()
};

/**
 * observer interface
 */
class BEHAVIORALPATTERNS_API IObserver
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Update(const FString& Message);
};
