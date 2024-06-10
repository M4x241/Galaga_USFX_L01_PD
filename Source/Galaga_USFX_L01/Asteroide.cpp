// Fill out your copyright notice in the Description page of Project Settings.


#include "Asteroide.h"

// Sets default values
AAsteroide::AAsteroide()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BallMesh(TEXT("StaticMesh'/Game/Meshes/Propios/geoda/geoda.geoda'"));
	MeshGeo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/Meshes/Propios/geoda/geoda.geoda'"));
	RootComponent = MeshGeo;
	MeshGeo->SetStaticMesh(BallMesh.Object);
	SetActorScale3D(FVector(5, 5, 5));

}

// Called when the game starts or when spawned
void AAsteroide::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAsteroide::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

