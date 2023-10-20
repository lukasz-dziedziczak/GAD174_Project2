// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "RTS_Pawn.generated.h"

class UCameraComponent;

UCLASS()
class GAD174_PROJECT2_API ARTS_Pawn : public APawn
{
	GENERATED_BODY()

	/*UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UCameraComponent* CameraComponent;*/

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Sets default values for this pawn's properties
	ARTS_Pawn();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
