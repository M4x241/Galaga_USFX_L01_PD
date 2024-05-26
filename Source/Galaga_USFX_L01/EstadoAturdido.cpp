// Fill out your copyright notice in the Description page of Project Settings.

#include "EstadoAturdido.h"

// Sets default values
AEstadoAturdido::AEstadoAturdido()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoAturdido::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoAturdido::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoAturdido::EstablecerJugador(AGalaga_USFX_L01Pawn* _jugador)
{
	jugador = _jugador;
}

void AEstadoAturdido::Aturdido()
{
	jugador1 = Cast<AActor>(jugador);
	int y = rand() % 2000-1000;
	jugador1->SetActorLocation(FVector(800,y,200));
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AEstadoAturdido::Aturdido, 0.3f, false, 0.0f);
	FTimerHandle TimerHandle1;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle1, this, &AEstadoAturdido::RegresarEstado, 3.0f, false, 3.0f);
}

FString AEstadoAturdido::ObtenerEstado()
{
	return "Estado Aturdido";
}

void AEstadoAturdido::RegresarEstado()
{
	jugador->PawnEstadoNormal(); 
	Destroy();
}

