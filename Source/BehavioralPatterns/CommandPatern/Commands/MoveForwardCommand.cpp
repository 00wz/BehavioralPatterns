// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveForwardCommand.h"

void UMoveForwardCommand::Execute_Implementation()
{
	Receiver->MoveForward();
}

void UMoveForwardCommand::Undo_Implementation()
{
	Receiver->MoveBack();
}
