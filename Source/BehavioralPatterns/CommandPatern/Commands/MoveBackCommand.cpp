// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveBackCommand.h"

void UMoveBackCommand::Execute_Implementation()
{
	Receiver->MoveBack();
}

void UMoveBackCommand::Undo_Implementation()
{
	Receiver->MoveForward();
}
