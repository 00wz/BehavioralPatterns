// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveRightCommand.h"

void UMoveRightCommand::Execute_Implementation()
{
	Receiver->Execute_MoveRight(Receiver.GetObjectRef());
}

void UMoveRightCommand::Undo_Implementation()
{
	Receiver->Execute_MoveLeft(Receiver.GetObjectRef());
}
