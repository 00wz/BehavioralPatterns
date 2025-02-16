// Fill out your copyright notice in the Description page of Project Settings.


#include "SprintState.h"

#include "RunState.h"
#include "WalkState.h"
#include "BehavioralPatterns/StateMachine/RunningContextCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void USprintState::OnEnterState(ARunningContextCharacter* context)
{
	IIRunningState::OnEnterState(context);
	m_context->GetCharacterMovement()->MaxWalkSpeed = 600.f;
}

void USprintState::OnTick(float DeltaTime)
{
	m_context->Energy -= DeltaTime;
	if(m_context->Energy <= 0.f)
	{
		m_context->Energy = 0.f;
		auto nextState = NewObject<UWalkState>(m_context);
		m_context->CurrentState = nextState;
		nextState->OnEnterState(m_context);
	}
}

void USprintState::OnAccelerationEnd()
{
	auto nextState = NewObject<URunState>(m_context);
	m_context->CurrentState = nextState;
	nextState->OnEnterState(m_context);
}
