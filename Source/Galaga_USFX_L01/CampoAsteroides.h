// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CampoAsteroides.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ACampoAsteroides : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACampoAsteroides();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void GenerarCampoAsteroides();
private:
	class AAsteroide* asteroide;
	TArray<class AAsteroide*> LabAsteroides;
};
