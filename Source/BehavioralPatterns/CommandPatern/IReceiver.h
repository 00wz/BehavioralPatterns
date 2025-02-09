// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IReceiver.generated.h"

// This class does not need to be modified.
UINTERFACE(Blueprintable)
class UIReceiver : public UInterface
{
	GENERATED_BODY()
};

/**
 * defines the interface of the recipient of the movement command
 */
class BEHAVIORALPATTERNS_API IIReceiver
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category=IIReceiver)
	void MoveForward();
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category=IIReceiver)
	void MoveBack();
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category=IIReceiver)
	void MoveLeft();
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category=IIReceiver)
	void MoveRight();
	
};
