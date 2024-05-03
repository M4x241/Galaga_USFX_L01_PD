// Fill out your copyright notice in the Description page of Project Settings.


#include "Stage1.h"
#include "Escenario.h"
#include "Bomba.h"

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
	Escenario = GetWorld()->SpawnActor<AEscenario>(AEscenario::StaticClass());
	Escenario->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

}

// Called every frame
void AStage1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStage1::BuildEscenario1()
{
	if (!Escenario) {
		UE_LOG(LogTemp, Warning, TEXT("Error con el los planos"));
		return;
	}
	Escenario->SetEscenario1();
}

void AStage1::BuildEscenario2()
{
	if (!Escenario) {
		UE_LOG(LogTemp, Warning, TEXT("Error con el los planos"));
		return;
	}
	Escenario->SetEscenario2();
}

void AStage1::BuildEscenario3()
{
	if (!Escenario) {
		UE_LOG(LogTemp, Warning, TEXT("Error con el los planos"));
		return;
	}
	Escenario->SetEscenario3();
}

void AStage1::BuildEscenario4()
{
	if (!Escenario) {
		UE_LOG(LogTemp, Warning, TEXT("Error con el los planos"));
		return;
	}
	Escenario->SetEscenario4();
}

