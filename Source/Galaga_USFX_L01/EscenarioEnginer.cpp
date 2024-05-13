// Fill out your copyright notice in the Description page of Project Settings.


#include "EscenarioEnginer.h"

// Sets default values
AEscenarioEnginer::AEscenarioEnginer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEscenarioEnginer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscenarioEnginer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEscenarioEnginer::setConstructorEscenario(AActor* _constructor)
{
	stage = Cast<IBConstructorEscenario>(_constructor);
	if (!stage) 
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("¡Cast no válido! Consulte Registro de salida para obtener más detalles."));
		UE_LOG(LogTemp, Error, TEXT("setConstructorEsceneario():¡El actor no es un stage! "));
	}	
}

void AEscenarioEnginer::makeLevel(int level)
{
	switch (level)
	{
	case 1:
		construirEscenario1();
		break;
	case 2:
		construirEscenario2();
		break;
	case 3:
		construirEscenario3();
		break;
	case 4:
		construirEscenario4();
		break;
	default:
		UE_LOG(LogTemp, Warning, TEXT("No se pudo construir el escenario"));
		break;
	}
}

void AEscenarioEnginer::construirEscenario1()
{
	if (!stage)
	{
		UE_LOG(LogTemp, Warning, TEXT("No se pudo construir el escenario"));
	}
	stage->BuildEscenario1();
	UE_LOG(LogTemp, Warning, TEXT("Construyendo"));

}

void AEscenarioEnginer::construirEscenario2()
{
	if (!stage)
	{
		UE_LOG(LogTemp, Warning, TEXT("No se pudo construir el escenario"));
	}
	stage->BuildEscenario2();
}

void AEscenarioEnginer::construirEscenario3()
{
	if (!stage)
	{
		UE_LOG(LogTemp, Warning, TEXT("No se pudo construir el escenario"));
	}
	stage->BuildEscenario3();
}

void AEscenarioEnginer::construirEscenario4()
{
	if (!stage)
	{
		UE_LOG(LogTemp, Warning, TEXT("No se pudo construir el escenario"));
	}
	stage->BuildEscenario4();
}

