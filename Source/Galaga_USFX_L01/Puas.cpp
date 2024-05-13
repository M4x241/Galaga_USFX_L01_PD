// Fill out your copyright notice in the Description page of Project Settings.


#include "Puas.h"

// Sets default values
APuas::APuas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/Meshes/Energy.Energy'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Energy.Energy'"));
	Mesh->SetStaticMesh(ShipMesh.Object);
	Mesh->SetupAttachment(RootComponent);
	RootComponent = Mesh;

}

// Called when the game starts or when spawned
void APuas::BeginPlay()
{
	Super::BeginPlay();
	inicio = GetActorLocation();

}

// Called every frame
void APuas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
//Mover derecha
		SetActorLocation(GetActorLocation() + FVector(0, Right, 0) * 800*DeltaTime);
		if (GetActorLocation().Y > inicio.Y + 800 || GetActorLocation().Y < inicio.Y - 800) {
			Right *= -1;
		}

}

