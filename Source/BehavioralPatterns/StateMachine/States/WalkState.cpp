// Fill out your copyright notice in the Description page of Project Settings.


#include "WalkState.h"

#include "BehavioralPatterns/StateMachine/RunningContextCharacter.h"

#include "RunState.h"
#include "GameFramework/CharacterMovementComponent.h"

void UWalkState::OnEnterState(ARunningContextCharacter* context)
{
	IIRunningState::OnEnterState(context);
	m_context->GetCharacterMovement()->MaxWalkSpeed = 100.f;
}

void UWalkState::OnTick(float DeltaTime)
{
	m_context->Energy += DeltaTime;
	if(m_context->Energy >= m_context->MaxEnergy)
	{
		m_context->Energy = m_context->MaxEnergy;
		auto nextState = NewObject<URunState>(m_context);
		m_context->CurrentState = nextState;
		nextState->OnEnterState(m_context);
	}
}
