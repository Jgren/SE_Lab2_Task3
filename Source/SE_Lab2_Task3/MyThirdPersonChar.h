// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyThirdPersonChar.generated.h"

UCLASS()
class SE_LAB2_TASK3_API AMyThirdPersonChar : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyThirdPersonChar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void MoveRight(float Value);
	void MoveForward(float Value);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
