// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoDanado.h"

// Sets default values
AEstadoDanado::AEstadoDanado()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoDanado::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoDanado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoDanado::EstablecerJugador(AGalaga_USFX_L01Pawn* _jugador)
{
	jugador = _jugador;
}

void AEstadoDanado::Danado()
{
	//mostrar la vida del jugador con uelog
	//UE_LOG(LogTemp, Warning, TEXT("Vida del jugador: %d"), jugador->GetVida()); 
	//mostrar la vida del jugador
	FTimerHandle TimerHandle1;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle1, this, &AEstadoDanado::restarvidajugador, 1.0f, true, 0.0f);
}

FString AEstadoDanado::ObtenerEstado()
{
	return "Estado Danado";
}

void AEstadoDanado::RegresarEstado()
{
	jugador->PawnEstadoNormal(); 
	Destroy(); 
}

void AEstadoDanado::restarvidajugador()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("Vida del jugador: %d"), jugador->GetVida()));
	jugador->RestarVida();
	if (jugador->GetVida() == 5)
	{
		RegresarEstado();
	}
}

