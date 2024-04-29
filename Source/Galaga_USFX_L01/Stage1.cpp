// Fill out your copyright notice in the Description page of Project Settings.


#include "Stage1.h"
#include "NaveEnemigaTransportePesado.h"

// Sets default values
AStage1::AStage1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStage1::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void AStage1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStage1::BuildMuro()
{
	ANaveEnemigaTransportePesado* Barrera = GetWorld()->SpawnActor<ANaveEnemigaTransportePesado>(FVector(0, 0, 300), FRotator(0, 0, 0));
}

void AStage1::BuildBombaTrampa()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BuildBombaTrampaescenario1"));
}

void AStage1::BuildMurosMovedizos()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BuildMurosMovedizosescenario1"));
}

void AStage1::BuildMuroPuas()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BuildMuroPuasescenario1"));
}

void AStage1::BuildPortales()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BuildPortalesescenario1"));
}

void AStage1::BuildItem()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BuildItemescenario1"));
}

void AStage1::TipoEscenario(UStaticMesh)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("TipoEscenarioescenario1"));
}

void AStage1::BuildSuelo()
{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BuildSueloescenario1"));
}

