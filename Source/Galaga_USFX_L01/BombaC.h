// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BMunicionLevel.h"
#include "BombaC.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ABombaC : public AActor, public IBMunicionLevel
{
	GENERATED_BODY()
	UStaticMeshComponent* bombamalla;
	
public:	
	// Sets default values for this actor's properties
	ABombaC();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	void TipoBomba();
	void RadioExplosion();
	void Movimiento(float DeltaTime);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void SetLevelMunicion(FString dif) override;
	void ActDetonador(){ detonador = true; }
	FORCEINLINE void detonarNave(); 
private:
	float RatioExplosion= 500; 
	float velocidad = 800;
	bool detonador = false;

};
