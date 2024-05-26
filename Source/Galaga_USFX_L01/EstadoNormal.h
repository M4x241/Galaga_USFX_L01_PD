// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IEstadoPawn.h"
#include "Galaga_USFX_L01Pawn.h"
#include "EstadoNormal.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AEstadoNormal : public AActor, public IIEstadoPawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoNormal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	virtual void EstablecerJugador(class AGalaga_USFX_L01Pawn* _jugador) override;
	virtual void Normal() override ;
	virtual FString ObtenerEstado() override;
	virtual void RegresarEstado() override;
private:
	virtual void Confundido()  override {};
	virtual void Aturdido() override {};
	virtual void Danado() override {};
	AGalaga_USFX_L01Pawn* jugador;
};
