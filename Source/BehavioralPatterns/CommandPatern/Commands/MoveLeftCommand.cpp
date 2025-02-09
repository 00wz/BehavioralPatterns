// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveLeftCommand.h"

void UMoveLeftCommand::Execute_Implementation()
{
	Receiver->Execute_MoveLeft(Receiver.GetObjectRef());
}

void UMoveLeftCommand::Undo_Implementation()
{
	Receiver->Execute_MoveRight(Receiver.GetObjectRef());
}
