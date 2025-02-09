// Fill out your copyright notice in the Description page of Project Settings.


#include "Invoker.h"

void UInvoker::RunCommand(IICommand Command)
{
	CommandsCache.Push(Command);
	Command.Execute();
}

void UInvoker::Undo()
{
	if(CommandsCache.Num() <= 0)
	{
		return;
	}
	CommandsCache.Pop().Undo();
}
