// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveBackCommand.h"

void UMoveBackCommand::Execute_Implementation()
{
	Receiver->Execute_MoveBack(Receiver.GetObjectRef());
}

void UMoveBackCommand::Undo_Implementation()
{
	Receiver->Execute_MoveForward(Receiver.GetObjectRef());
}
