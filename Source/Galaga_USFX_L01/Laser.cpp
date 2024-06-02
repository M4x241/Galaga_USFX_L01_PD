// Fill out your copyright notice in the Description page of Project Settings.


#include "Laser.h"

// Sets default values
ALaser::ALaser()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BallMesh(TEXT("StaticMesh'/Game/Meshes/BulletLevel2.BulletLevel2'"));
	lasermalla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/Meshes/BulletLevel2.BulletLevel2'"));
	RootComponent = lasermalla;
	SetActorScale3D(FVector(1, 5, 1));
	lasermalla->SetStaticMesh(BallMesh.Object);

}

// Called when the game starts or when spawned
void ALaser::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALaser::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	varTick += GetWorld()->GetDeltaSeconds();
	Estiramiento(DeltaTime);
}

void ALaser::tipoLaser()
{
}

void ALaser::Potencia()
{
}

void ALaser::Estiramiento(float DeltaTime)
{
	if (varTick >= 1.5f)
	{
		FVector esti = GetActorScale3D();
		esti.X += potenc * DeltaTime;
		SetActorRelativeScale3D(esti);
	}
	if (varTick >= 2.5) {
		Destroy();
	}
	
}

void ALaser::SetLevelMunicion(FString dif)
{
	if (dif == "Facil")
	{
		velocidad = 0;
	}
	else if (dif == "Medio")
	{
		velocidad = 800;
	}
	else if (dif == "Dificil")
	{
		velocidad = 1200;
	}
}

