// Fill out your copyright notice in the Description page of Project Settings.


#include "FormacionDiamante.h"

// Sets default values
AFormacionDiamante::AFormacionDiamante()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFormacionDiamante::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFormacionDiamante::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFormacionDiamante::AplicarFormacion(TArray<ANaveEnemiga*> Escuadron)
{
    int n = 9; // tamaño de la estrella
    int mid = n / 2;
    AActor* nave = nullptr;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == mid || j == mid || i + j == mid || j - i == mid || i - j == mid || i + j == n + mid - 1) {
                //cout << "*";
                //Escuadron[0]->SetActorLocation(FVector(i * 100, j * 100, 0));
                if (Escuadron.Num() > 0) {
                    nave = Cast<AActor>(Escuadron[0]);
                    nave->SetActorLocation(FVector(i * 100, j * 100, 200));
                    Escuadron.RemoveAt(0);
                }
               
            }
            else {
                //cout << " ";
            }
        }
        //cout << endl;
    }
}

