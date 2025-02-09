// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ICommand.h"
#include "UObject/Object.h"
#include "Invoker.generated.h"

/**
 * command initiator - calls a command to execute a specific request
 */
UCLASS()
class BEHAVIORALPATTERNS_API UInvoker : public UObject
{
	GENERATED_BODY()

private:
	/*
	 * command history
	 */
	TArray<IICommand> CommandsCache;

public:
	/*
	 * run the command
	 */
	void RunCommand(IICommand Command);

	/*
	 * cancel the last command
	 */
	void Undo();
};
