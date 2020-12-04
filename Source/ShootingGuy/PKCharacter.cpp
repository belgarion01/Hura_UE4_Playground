// Fill out your copyright notice in the Description page of Project Settings.


#include "PKCharacter.h"

#include "GameFramework/CharacterMovementComponent.h"

APKCharacter::APKCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// Spawn and Setup the spring arm
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	SpringArm->TargetArmLength = 1000.f;
	SpringArm->bUsePawnControlRotation = false;
	SpringArm->SetRelativeRotation(FRotator(300.f, 0.f, 0.f));
	SpringArm->bInheritPitch = false;
	SpringArm->bInheritYaw = false;
	SpringArm->bInheritRoll = false;

	// Spawn and Setup the camera
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Main Camera"));
	Camera->AttachToComponent(SpringArm, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

	// Setup rotation with movement
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 1000.f, 0.f);
}

// Called when the game starts or when spawned
void APKCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APKCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APKCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("HorizontalMovement", this, &APKCharacter::MoveRight);
	PlayerInputComponent->BindAxis("VerticalMovement", this, &APKCharacter::MoveUp);
}

void APKCharacter::MoveUp(float vAxis)
{
	AddMovementInput(FVector::RightVector, vAxis);  
}

void APKCharacter::MoveRight(float hAxis)
{
	AddMovementInput(FVector::ForwardVector, hAxis);
}

