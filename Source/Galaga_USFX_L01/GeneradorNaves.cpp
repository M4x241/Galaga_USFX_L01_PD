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
	//claseEnemiga = ANaveEnemiga::StaticClass();
	/*ANaveEnemigaCazaAlfa* NaveEnemigaTAlfa;
	ANaveEnemigaCazaDelta* NaveEnemigaTDelta;
	ANaveEnemigaTransporteLigero* NaveEnemigaTLigero;
	ANaveEnemigaTransportePesado* NaveEnemigaTPesado;
	ANaveEnemigaEspiaScout* NaveEnemigaTScout;
	ANaveEnemigaEspiaCentral* NaveEnemigaTCentral;
	ANaveEnemigaNodrizaMadre* NaveEnemigaTMadre;
	ANaveEnemigaNodrizaWar* NaveEnemigaTWar;
	ANaveEnemigaReabastecimientoFuel* NaveEnemigaTFuel;*/

	if (World) {
		FVector posicionNave = FVector(rand() % 1000 - 500, rand() % 1000 - 500, 200);
		FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

		AFabricaMxCorporation* fabrica = World->SpawnActor<AFabricaEnemiga>(AFabricaEnemiga::StaticClass());
		ANaveEnemiga* nave;
		//GEngine->AddOnScreenDebugMessage(-5, 10.0f, FColor::Blue, TEXT("TE CREO: "));
		//nave = fabrica->EnsambladoNave("delta");
		//if (nave) {
		//	//World->SpawnActor<ANaveEnemigaCaza>(nave->GetClass(), FVector(0, 0, 250), FRotator(0, 0, 0));
		//	GEngine->AddOnScreenDebugMessage(-5, 10.0f, FColor::Blue, TEXT("TE CREO: "));
		//}
		//else {
		//	//UE_LOG(LogTemp, Warning, TEXT("EnsambladoNave returned nullptr!"));		
		//	GEngine->AddOnScreenDebugMessage(-5, 10.0f, FColor::Blue, TEXT("NO SE CREO: "));
		//}

		int tipNave = 0;
		for (int i = 0; i < 3; i++) {//4
			
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
			GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Blue, TEXT("Hola"));
			TANaveEnemigamix.RemoveAt(i); 
		}
	}
	if (TANaveEnemigamix.Num() == 0 ) {
		level++;
		pase = true;
		for (int i = 0; i < level; i++){
			generarNave(); 
		}
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
		stage1->setHighScore(highScore);
		Enginer = World->SpawnActor<AEscenarioEnginer>(AEscenarioEnginer::StaticClass());
		Enginer->setConstructorEscenario(stage1);
	}
	
	// ...
	
}


// Called every frame
void UGeneradorNaves::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	NotEnemy();
	if (Enginer) {
		if (level == 1 && pase) {
			Enginer->construirEscenario1(); pase = false;
		}
		else if (level == 2 && pase){
			Enginer->construirEscenario2(); pase = false;
		}
		else if (level == 3 && pase)
		{
			Enginer->construirEscenario3(); pase = false;
		}
		else if (level == 4 && pase) {
			Enginer->construirEscenario4(); pase = false;
		}
	}
	// ...
}

