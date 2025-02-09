// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveLeftCommand.h"

void UMoveLeftCommand::Execute_Implementation()
{
	Receiver->MoveLeft();
}

void UMoveLeftCommand::Undo_Implementation()
{
	Receiver->MoveRight();
}
