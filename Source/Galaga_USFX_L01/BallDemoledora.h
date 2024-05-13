// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ball.h"
#include "BControllerBall.h"
#include "BallDemoledora.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ABallDemoledora : public AActor, public IBControllerBall
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABallDemoledora();
private:
	class ABall* ball;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void launchBall() override;
};
