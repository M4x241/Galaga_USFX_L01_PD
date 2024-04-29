// Fill out your copyright notice in the Description page of Project Settings.


#include "BombaTrampa.h"

// Sets default values
ABombaTrampa::ABombaTrampa()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABombaTrampa::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABombaTrampa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

