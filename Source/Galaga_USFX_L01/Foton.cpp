// Fill out your copyright notice in the Description page of Project Settings.


#include "Foton.h"

// Sets default values
AFoton::AFoton()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BallMesh(TEXT("StaticMesh'/Game/Meshes/BulletLevel1.BulletLevel1'"));
	fotonmalla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/Meshes/BulletLevel1.BulletLevel1'"));
	RootComponent = fotonmalla;
	fotonmalla->SetStaticMesh(BallMesh.Object);
	ZigActivo = false;

}

// Called when the game starts or when spawned
void AFoton::BeginPlay()
{
	Super::BeginPlay();
	posIn = GetActorLocation();
	
}

// Called every frame
void AFoton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Rotar(DeltaTime);
	zigzag(DeltaTime);

}

void AFoton::TipoFoton()
{
}

void AFoton::Rotar(float DeltaTime)
{
	FVector pos = GetActorLocation();
	pos.X -= velocidad * DeltaTime; // velocidad es una variable que determina la velocidad del movimiento
	SetActorLocation(pos);

}

void AFoton::zigzag(float DeltaTime)
{
	if (ZigActivo) {
		FVector pos = GetActorLocation();
		//una condicional para que se mueva de izquierda a derecha unos 200 puntos, en el eje y
		if (pos.Y >= posIn.Y + 50) {
			ID = -1;
		}
		else if(pos.Y <= posIn.Y - 50) {
			ID = 1;
		}
		pos.Y += 800 * DeltaTime*ID;
		SetActorLocation(pos);
	}
	
}

void AFoton::SetLevelMunicion(FString dif)
{
	if (dif == "Facil")
	{
		velocidad = 800;
	}
	else if (dif == "Medio")
	{
		velocidad = 1200;
	}
	else if (dif == "Dificil")
	{	
		velocidad = 1500;
		ZigActivo = true;
	}
}

