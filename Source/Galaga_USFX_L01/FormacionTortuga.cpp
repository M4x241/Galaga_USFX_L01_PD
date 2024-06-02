// Fill out your copyright notice in the Description page of Project Settings.


#include "FormacionTortuga.h"

// Sets default values
AFormacionTortuga::AFormacionTortuga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFormacionTortuga::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFormacionTortuga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFormacionTortuga::AplicarFormacion(TArray<ANaveEnemiga*> Escuadron)
{
	AActor* navepos = nullptr;
	for (int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(Escuadron.Num() == 0)
			{
				return;
			}
			FVector Posicion = FVector(i * 300, j * 300, 200);
			navepos = Cast<AActor>(Escuadron[0]);
			navepos->SetActorLocation(Posicion);
			Escuadron.RemoveAt(0);
		}
	}
}

