// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorNaves.h"
#include "NaveEnemiga.h"
#include "FabricaMxCorporation.h"
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
#include "FabricaEnemiga.h"
#include "INavesGuardianas.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UGeneradorNaves::UGeneradorNaves()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	// ...
}

void UGeneradorNaves::generarNave()
{
	UWorld* World = GetWorld();

	if (World) {
		FVector posicionNave = FVector(rand() % 1000 - 500, rand() % 1000 - 500, 200);
		FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

		AFabricaMxCorporation* fabrica = World->SpawnActor<AFabricaEnemiga>(AFabricaEnemiga::StaticClass());
		ANaveEnemiga* nave;

		int tipNave = 0;
		for (int i = 0; i < 3; i++) {
			
				for (int j = 0; j < 3; j++) {
					tipNave = rand() % 4;
					nave = fabrica->EnsambladoNave(tipNave);
					if (nave) {
						nave=World->SpawnActor<ANaveEnemiga>(nave->GetClass(), FVector(1200 + 200 * i, -100 + 200 * j, 200), FRotator(0, 0, 0));
						TANaveEnemigamix.Push(nave);
					}

				}
			
		}
		
	}
	
}

void UGeneradorNaves::NotEnemy()
{
	int totalShips = TANaveEnemigamix.Num();
	//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Blue, FString::Printf(TEXT("Total Ships: %d"), totalShips)); 

	for (int i = TANaveEnemigamix.Num() - 1; i >= 0; i--) 
	{
		if (TANaveEnemigamix[i]->IsPendingKill()) { 
			TANaveEnemigamix.RemoveAt(i); 
		}
	}
	if (TANaveEnemigamix.Num() == 0 ) {
		level++;
		Enginer->makeLevel(level);
		generarNave();
		/*for (int i = 0; i < level; i++){
			generarNave(); 
		}*/
	}
}


// Called when the game starts
void UGeneradorNaves::BeginPlay()
{
	Super::BeginPlay();
	//builder
	UWorld* World = GetWorld();
	if (World) { 
		highScore = GetWorld()->SpawnActor<AHighScore>(AHighScore::StaticClass());
		stage1 = World->SpawnActor<AStage1>(AStage1::StaticClass());
		stage2 = World->SpawnActor<AStage2>(AStage2::StaticClass());
		Enginer = World->SpawnActor<AEscenarioEnginer>(AEscenarioEnginer::StaticClass());
		Enginer->setConstructorEscenario(stage1);
		Enginer->makeLevel(level);
	}

	NaveMadre = GetWorld()->SpawnActor<ANaveEnemigaNodrizaMadre>(FVector(1800, 1000, 200), FRotator(0, 0, 0));
	Observador = GetWorld()->SpawnActor<AObserverBoss>(AObserverBoss::StaticClass());
	Observador->ObservarANodriza(NaveMadre);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			ANaveEnemigaEspiaScout* nave = GetWorld()->SpawnActor<ANaveEnemigaEspiaScout>(ANaveEnemigaEspiaScout::StaticClass(), FVector(1200 + 200 * i, 4000 + 200 * j, 200), FRotator(0, 0, 0));
			//NavesGuardianes.Push(nave);
			nave->setPublicador(Observador);
		}
	}
	// ...
	
}


// Called every frame
void UGeneradorNaves::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	NotEnemy();
	// ...
}

