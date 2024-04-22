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
	ANaveEnemigaCazaAlfa* NaveEnemigaTAlfa;
	ANaveEnemigaCazaDelta* NaveEnemigaTDelta;
	ANaveEnemigaTransporteLigero* NaveEnemigaTLigero;
	ANaveEnemigaTransportePesado* NaveEnemigaTPesado;
	ANaveEnemigaEspiaScout* NaveEnemigaTScout;
	ANaveEnemigaEspiaCentral* NaveEnemigaTCentral;
	ANaveEnemigaNodrizaMadre* NaveEnemigaTMadre;
	ANaveEnemigaNodrizaWar* NaveEnemigaTWar;
	ANaveEnemigaReabastecimientoFuel* NaveEnemigaTFuel;

	if (World) {
		FVector posicionNave = FVector(rand() % 1000 - 500, rand() % 1000 - 500, 200);
		FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

		AFabricaMxCorporation* fabrica = World->SpawnActor<AFabricaEnemiga>(AFabricaEnemiga::StaticClass());
		ANaveEnemiga* nave;
		//GEngine->AddOnScreenDebugMessage(-5, 10.0f, FColor::Blue, TEXT("TE CREO: "));
		nave = fabrica->EnsambladoNave("delta");
		if (nave) {
			//World->SpawnActor<ANaveEnemigaCaza>(nave->GetClass(), FVector(0, 0, 250), FRotator(0, 0, 0));
			GEngine->AddOnScreenDebugMessage(-5, 10.0f, FColor::Blue, TEXT("TE CREO: "));
		}
		else {
			//UE_LOG(LogTemp, Warning, TEXT("EnsambladoNave returned nullptr!"));		
			GEngine->AddOnScreenDebugMessage(-5, 10.0f, FColor::Blue, TEXT("NO SE CREO: "));

		}




		int tipNave = 0;
		for (int i = 0; i < 6; i++) {//4
			if (nave) {
				World->SpawnActor<ANaveEnemiga>(nave->GetClass(), FVector(0, 0+200*i, 200), FRotator(0, 0, 0));
				GEngine->AddOnScreenDebugMessage(-5, 10.0f, FColor::Blue, TEXT("TE CREO: "));
			}
			tipNave = rand() % 8;
			switch (tipNave) {
			case 0:
				for (int j = 0; j < 6; j++) {
					NaveEnemigaTAlfa = World->SpawnActor<ANaveEnemigaCazaAlfa>(posicionNave + FVector(150 * i, 200 * j, 0), rotacionNave);
					TANaveEnemigamix.Push(NaveEnemigaTAlfa);
				}

				break;
			case 1:
				for (int j = 0; j < 6; j++) {
					NaveEnemigaTDelta = World->SpawnActor<ANaveEnemigaCazaDelta>(posicionNave + FVector(150 * i, 200 * j, 0), rotacionNave);
					TANaveEnemigamix.Push(NaveEnemigaTDelta);
				}
				break;
			case 2:
				for (int j = 0; j < 6; j++) {
					NaveEnemigaTLigero = World->SpawnActor<ANaveEnemigaTransporteLigero>(posicionNave + FVector(150 * i, 200 * j, 0), rotacionNave);
					TANaveEnemigamix.Push(NaveEnemigaTLigero);
				}
				break;
			case 3:
				for (int j = 0; j < 6; j++) {
					NaveEnemigaTPesado = World->SpawnActor<ANaveEnemigaTransportePesado>(posicionNave + FVector(150 * i, 200 * j, 0), rotacionNave);
					TANaveEnemigamix.Push(NaveEnemigaTPesado);
				}
				break;
			case 4:
				for (int j = 0; j < 6; j++) {
					NaveEnemigaTScout = World->SpawnActor<ANaveEnemigaEspiaScout>(posicionNave + FVector(150 * i, 200 * j, 0), rotacionNave);
					TANaveEnemigamix.Push(NaveEnemigaTScout);
				}
				break;
			case 5:
				for (int j = 0; j < 6; j++) {
					NaveEnemigaTCentral = World->SpawnActor<ANaveEnemigaEspiaCentral>(posicionNave + FVector(150 * i, 200 * j, 0), rotacionNave);
					TANaveEnemigamix.Push(NaveEnemigaTCentral);
				}
				break;
			case 6:
				for (int j = 0; j < 6; j++) {
					NaveEnemigaTMadre = World->SpawnActor<ANaveEnemigaNodrizaMadre>(posicionNave + FVector(150 * i, 200 * j, 0), rotacionNave);
					TANaveEnemigamix.Push(NaveEnemigaTMadre);
				}
				break;
			case 7:
				for (int j = 0; j < 6; j++) {
					NaveEnemigaTWar = World->SpawnActor<ANaveEnemigaNodrizaWar>(posicionNave + FVector(150 * i, 200 * j, 0), rotacionNave);
					TANaveEnemigamix.Push(NaveEnemigaTWar);
				}
				break;
			case 8:
				for (int j = 0; j < 6; j++) {
					NaveEnemigaTFuel = World->SpawnActor<ANaveEnemigaReabastecimientoFuel>(posicionNave + FVector(150 * i, 200 * j, 0), rotacionNave);
					TANaveEnemigamix.Push(NaveEnemigaTFuel);
				}
				break;
			default: break;

			}
		}
		
	}
	
}

void UGeneradorNaves::NotEnemy()
{
	for (int i = 0; i < TANaveEnemigamix.Num(); i++)
	{
		if (TANaveEnemigamix[i]->IsPendingKill()) {
			TANaveEnemigamix.RemoveAt(i); 
		}
	}
	if (TANaveEnemigamix.Num() == 0 ) {
		level++;
		for (int i = 0; i < level; i++)
		{
			generarNave(); 
		}
	}
}


// Called when the game starts
void UGeneradorNaves::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGeneradorNaves::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	NotEnemy();
	// ...
}

