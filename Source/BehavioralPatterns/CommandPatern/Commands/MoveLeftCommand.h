// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehavioralPatterns/CommandPatern/ICommand.h"
#include "UObject/Object.h"
#include "MoveLeftCommand.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class BEHAVIORALPATTERNS_API UMoveLeftCommand :  public UCommand
{
	GENERATED_BODY()

	void Execute_Implementation() override;

	void Undo_Implementation() override;
};
