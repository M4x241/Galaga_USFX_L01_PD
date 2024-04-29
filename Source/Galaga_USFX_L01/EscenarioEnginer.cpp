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
	ConstructorEscenario = Cast<IBConstructorEscenario>(_constructor);  
	if (!ConstructorEscenario) 
	{
		UE_LOG(LogTemp, Warning, TEXT("No se pudo castear el constructor de escenario")); 
	}	
}

void AEscenarioEnginer::construirEscenario()
{
	if (ConstructorEscenario)
	{
		ConstructorEscenario->BuildMuro(); 
		ConstructorEscenario->BuildBombaTrampa(); 
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se pudo construir el escenario")); 
	}
}

void AEscenarioEnginer::Escenario1()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Escenario1"));
	ConstructorEscenario->BuildMuro();
}

void AEscenarioEnginer::Escenario2()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Escenario2"));
	ConstructorEscenario->BuildBombaTrampa();
}

void AEscenarioEnginer::Escenario3()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Escenario3"));
	ConstructorEscenario->BuildMuro();
	ConstructorEscenario->BuildBombaTrampa();
}

