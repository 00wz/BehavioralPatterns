// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ICommand.h"
#include "UObject/Object.h"
#include "Invoker.generated.h"

/**
 * command initiator - calls a command to execute a specific request
 */
UCLASS(Blueprintable)
class BEHAVIORALPATTERNS_API UInvoker : public UObject
{
	GENERATED_BODY()

private:
	/*
	 * command history
	 */
	UPROPERTY()
	TArray<UCommand*> CommandsCache;

public:
	/*
	 * run the command
	 */
	UFUNCTION(BlueprintCallable, Category=Invoker)
	void RunCommand(UCommand* Command);

	/*
	 * cancel the last command
	 */
	UFUNCTION(BlueprintCallable, Category=Invoker)
	void Undo();
};
