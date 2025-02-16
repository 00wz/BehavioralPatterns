// Fill out your copyright notice in the Description page of Project Settings.


#include "RunState.h"

#include "SprintState.h"
#include "BehavioralPatterns/StateMachine/RunningContextCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void URunState::OnEnterState(ARunningContextCharacter* context)
{
	IIRunningState::OnEnterState(context);
	m_context->GetCharacterMovement()->MaxWalkSpeed = 300.f;
}

void URunState::OnAccelerationStart()
{
	auto nextState = NewObject<USprintState>(m_context);
	m_context->CurrentState = nextState;
	nextState->OnEnterState(m_context);
}

void URunState::OnTick(float DeltaTime)
{
	m_context -> Energy =
		FMath::Min(m_context -> Energy + DeltaTime, m_context ->MaxEnergy);
	
}
