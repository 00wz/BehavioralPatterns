// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Observer.h"
#include "UObject/Interface.h"
#include "Subject.generated.h"

// This class does not need to be modified.
UINTERFACE(Blueprintable)
class USubject : public UInterface
{
	GENERATED_BODY()
};

/**
 * subject interface
 */
class BEHAVIORALPATTERNS_API ISubject
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Subscribe(const TScriptInterface<IObserver>& Observer);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Unsubscribe(const TScriptInterface<IObserver>& Observer);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Notify(const FString& Message);
};
