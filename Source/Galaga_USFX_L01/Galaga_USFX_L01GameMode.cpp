// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaCazaAlfa.h"
#include "NaveEnemigaCazaDelta.h"
#include "NaveEnemigaTransporteLigero.h"
#include "NaveEnemigaTransportePesado.h"
#include "NaveEnemigaEspiaScout.h"
#include "NaveEnemigaEspiaCentral.h"
#include "NaveEnemigaReabastecimientoBombs.h"
#include "NaveEnemigaReabastecimientoFuel.h"  
#include "NaveEnemigaNodrizaMadre.h"
#include "NaveEnemigaNodrizaWar.h"
#include <ctime>
#include "ProyectilEnemigo.h"
#include "BallDemoledora.h"
#include "Kismet/GameplayStatics.h"

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();
	GeneradorNaves01 = CreateDefaultSubobject<UGeneradorNaves>(TEXT("GeneradorNaves01")); 
	//GeneradorNaves01 = CreateDefaultSubobject<UGeneradorNaves>(TEXT("GeneradorNaves01"));
}

void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido++;

}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();
	//set the game state to playing
	float x=1200;
	float y=-1000;
	FVector ubicacionNave01 = FVector(x, y, 250.0f);
	FVector ubicacionNave02 = FVector(x, y + 200, 250.0f);

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
	NaveEnemigaNodrizaMadre01 = GetWorld()->SpawnActor<ANaveEnemigaNodrizaMadre>(FVector(1800,1000,200), FRotator(0,0,0));

	naveJugador = Cast<AGalaga_USFX_L01Pawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	ballDemoledora = GetWorld()->SpawnActor<ABallDemoledora>(ABallDemoledora::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);
	naveJugador->SetBounceBall(ballDemoledora); 
	naveJugador->launchBall();

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		ANaveEnemigaReabastecimientoBombs* NaveEnemigaTBoms;
		proyectil = World->SpawnActor<AProyectilEnemigo>(FVector(-1600,-500,250), rotacionNave);
		NaveEnemigaTBoms = World->SpawnActor<ANaveEnemigaReabastecimientoBombs>(FVector(300, -900, 1500), rotacionNave);
		
		//se generan aleatoriamente las naves enemigas
		GeneradorNaves01->generarNave(); 
		
	}
}

