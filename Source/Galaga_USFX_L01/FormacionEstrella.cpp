// Fill out your copyright notice in the Description page of Project Settings.


#include "FormacionEstrella.h"

// Sets default values
AFormacionEstrella::AFormacionEstrella()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFormacionEstrella::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFormacionEstrella::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AFormacionEstrella::AplicarFormacion(TArray<ANaveEnemiga*> Escuadron)
{
    int height = 7;
    AActor* navepos = nullptr;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height; j++) {
            if (j == i || j == height - i - 1 || j == 3 || i == 3) {
                if (Escuadron.Num() > 0) {
                    FVector Posicion = FVector(i * 300, j * 300, 200);
                    navepos = Cast<AActor>(Escuadron[0]);
                    navepos->SetActorLocation(Posicion);
                    Escuadron.RemoveAt(0);
                }
            }
        }
    }
}
/*
*  *  *
 * * *
** * **
 * * *
*  *  *
*/
