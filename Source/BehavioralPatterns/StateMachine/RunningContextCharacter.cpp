// Fill out your copyright notice in the Description page of Project Settings.


#include "RunningContextCharacter.h"

#include "States/RunState.h"


// Sets default values
ARunningContextCharacter::ARunningContextCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ARunningContextCharacter::BeginPlay()
{
	Super::BeginPlay();
	CurrentState = NewObject<URunState>(this);
	CurrentState->OnEnterState(this);
	
}

// Called every frame
void ARunningContextCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CurrentState->OnTick(DeltaTime);
}

// Called to bind functionality to input
void ARunningContextCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ARunningContextCharacter::StartAcceleration);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ARunningContextCharacter::StopAcceleration);

	PlayerInputComponent->BindAxis("MoveForward", this, &ARunningContextCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ARunningContextCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ARunningContextCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ARunningContextCharacter::LookUpAtRate);

}

void ARunningContextCharacter::StartAcceleration()
{
	CurrentState->OnAccelerationStart();
}

void ARunningContextCharacter::StopAcceleration()
{
	CurrentState->OnAccelerationEnd();
}

