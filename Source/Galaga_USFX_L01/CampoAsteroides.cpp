// Fill out your copyright notice in the Description page of Project Settings.


#include "CampoAsteroides.h"
#include "Asteroide.h"

// Sets default values
ACampoAsteroides::ACampoAsteroides()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACampoAsteroides::BeginPlay()
{
	Super::BeginPlay();
    GenerarCampoAsteroides();
	
}

// Called every frame
void ACampoAsteroides::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACampoAsteroides::GenerarCampoAsteroides()
{
    const float CeldaAncho = 500.0f;
    int DIM = 30;
    for (int y = 0; y < DIM; y++)
    {
        for (int x = 0; x < DIM; x++)
        {
            FVector SpawnLocation = FVector(x * CeldaAncho + 17000, y * CeldaAncho - 300, 200.0f); 
            FRotator SpawnRotation = FRotator::ZeroRotator;
            if (((y > 0 && y < (DIM - 1) && x > 0 && x < (DIM - 1)) && (rand() % 5 < 3)) || (x == (DIM - 2) && y == (DIM - 1)))
            {
            }
            else
            {
                AAsteroide* Asteroide = GetWorld()->SpawnActor<AAsteroide>(SpawnLocation, SpawnRotation);
            }
        }
    }
}

