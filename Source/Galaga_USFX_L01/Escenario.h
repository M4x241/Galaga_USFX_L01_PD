// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BEstructuraEscenario.h"
#include "Escenario.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AEscenario : public AActor, public IBEstructuraEscenario
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AEscenario();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	TArray<FVector> PosicionesMuros;
	TArray<FVector> PosicionesBombaTrampa;
	TArray<FVector> PosicionesMurosMovedizos;
	TArray<FVector> PosicionesMuroPuas;
	TArray<FVector> PosicionesPortales;
	TArray<FVector> PosicionesItem;
	TArray<FVector> scaleMuros;
	TArray<FVector> PosicionesSuelo;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void SetMuro() ;
	void SetBombaTrampa() ;
	void SetMurosMovedizos()  ;
	void SetMuroPuas() ;
	void SetPortales()  ;
	void SetItem() ;
	void SetEscenario(UStaticMesh)  ;
	void SetSuelo()  ;
	virtual void SetEscenario1() override; 
	virtual void SetEscenario2() override;
	virtual void SetEscenario3() override;
	virtual void SetEscenario4() override;
};
