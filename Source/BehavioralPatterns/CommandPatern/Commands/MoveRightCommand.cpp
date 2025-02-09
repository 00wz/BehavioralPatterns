// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveRightCommand.h"

void UMoveRightCommand::Execute_Implementation()
{
	Receiver->MoveRight();
}

void UMoveRightCommand::Undo_Implementation()
{
	Receiver->MoveLeft();
}
