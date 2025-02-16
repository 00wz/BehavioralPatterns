// Fill out your copyright notice in the Description page of Project Settings.


#include "IRunningState.h"


// Add default functionality here for any IIRunningState functions that are not pure virtual.

void IIRunningState::OnEnterState(ARunningContextCharacter* context)
{
	m_context = context;
}

void IIRunningState::OnTick(float DeltaTime)
{
}

void IIRunningState::OnAccelerationStart()
{
}

void IIRunningState::OnAccelerationEnd()
{
}
