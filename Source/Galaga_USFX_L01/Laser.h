// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BMunicionLevel.h"
#include "Laser.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ALaser : public AActor, public IBMunicionLevel
{
	GENERATED_BODY()
	UStaticMeshComponent* lasermalla;
public:	
	// Sets default values for this actor's properties
	ALaser();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	float varTick = 0;
	float velocidad = 0;
	float potenc = 400;

public:
	void tipoLaser();
	void Potencia();
	void Estiramiento(float DeltaTime);
	virtual void SetLevelMunicion(FString dif) override;
	//getter
	float GetPotencia(){return potenc;}
	float GetVelocidad(){return velocidad;}
	//setters
	void SetPotencia(float pot){ potenc = pot;}
	void SetVelocidad(float vel){ velocidad = vel;}

};
