// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IEstadoPawn.h"
#include "Galaga_USFX_L01Pawn.h"
#include "EstadoAturdido.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AEstadoAturdido : public AActor, public IIEstadoPawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoAturdido();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	virtual void EstablecerJugador(class AGalaga_USFX_L01Pawn* _jugador) override;
	virtual void Aturdido() override;
	virtual FString ObtenerEstado() override;
	virtual void RegresarEstado() override;
private:
	virtual void Confundido() override {};
	virtual void Danado() override {};
	virtual void Normal() override {};
	AGalaga_USFX_L01Pawn* jugador;
	AActor* jugador1;
};
