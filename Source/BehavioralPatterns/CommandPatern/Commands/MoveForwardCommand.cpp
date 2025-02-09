// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveForwardCommand.h"

void UMoveForwardCommand::Execute_Implementation()
{
	Receiver->Execute_MoveForward(Receiver.GetObjectRef());
}

void UMoveForwardCommand::Undo_Implementation()
{
	Receiver->Execute_MoveBack(Receiver.GetObjectRef());
}
