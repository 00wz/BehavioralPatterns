// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IReceiver.h"
#include "UObject/Interface.h"
#include "ICommand.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UICommand : public UInterface
{
	GENERATED_BODY()
};

/**
 * defines the command interface
 */
class BEHAVIORALPATTERNS_API IICommand
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	/*
	 * pointer to the receiver
	 */
	UPROPERTY(BlueprintReadWrite, Category=IICommand, meta = (ExposeOnSpawn="true"))
	IIReceiver* Receiver;
	
	/*
	 * executes a command
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category=IICommand)
	void Execute();
	
	/*
	 * cancel the command
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category=IICommand)
	void Undo();
};
