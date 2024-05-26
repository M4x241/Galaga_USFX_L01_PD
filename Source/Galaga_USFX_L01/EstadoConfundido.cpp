// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoConfundido.h"

// Sets default values
AEstadoConfundido::AEstadoConfundido()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoConfundido::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoConfundido::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

void AEstadoConfundido::EstablecerJugador(AGalaga_USFX_L01Pawn* _jugador)
{
	jugador = _jugador;
	jugador->controles(false);

}

void AEstadoConfundido::Confundido()
{
	FTimerHandle TimerHandle1;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle1, this, &AEstadoConfundido::RegresarEstado, 5.0f, false, 3.0f);

}

FString AEstadoConfundido::ObtenerEstado()
{
	return "Estado Confundido";
}

void AEstadoConfundido::RegresarEstado()
{
	jugador->PawnEstadoNormal();
	jugador = nullptr;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("Estado borrado")));
	Destroy();
}

