// Fill out your copyright notice in the Description page of Project Settings.


#include "BombaC.h"
#include "Kismet/GameplayStatics.h"
#include "Galaga_USFX_L01Pawn.h"

// Sets default values
ABombaC::ABombaC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BallMesh(TEXT("StaticMesh'/Game/Meshes/Missile.Missile'"));
	bombamalla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/Meshes/Missile.Missile'"));
	RootComponent = bombamalla;
	bombamalla->SetStaticMesh(BallMesh.Object);

}

// Called when the game starts or when spawned
void ABombaC::BeginPlay()
{
	Super::BeginPlay();
	SetActorRotation(FRotator(180.0f, 0.0f, 0.0f));
	
}

void ABombaC::TipoBomba()
{
}

void ABombaC::RadioExplosion()
{
}

void ABombaC::Movimiento(float _DeltaTime)
{
	FVector pos = GetActorLocation();
	pos.X -= velocidad * _DeltaTime; // velocidad es una variable que determina la velocidad del movimiento
	SetActorLocation(pos);

}

// Called every frame
void ABombaC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Movimiento(DeltaTime);
	detonarNave();
}

void ABombaC::SetLevelMunicion(FString dif)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("seCambiolaDificultad"));
	if (dif == "Facil")
	{
		RatioExplosion = 500;
		velocidad = 800;
	}
	else if (dif == "Medio")
	{
		RatioExplosion = 600;
		velocidad = 1200;
	}
	else if (dif == "Dificil")
	{
		RatioExplosion = 900;
		velocidad = 1200;
		ActDetonador();
	}

}

void ABombaC::detonarNave()
{
	if (detonador) {
		TArray<AActor*> ActorsToDestroy;
		FVector BombLocation = GetActorLocation();
		float ExplosionRadius = 200.0f;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), ActorsToDestroy);

		for (AActor* Actor : ActorsToDestroy)
		{
			AActor* auxActor = Actor;
			auxActor = Cast<AGalaga_USFX_L01Pawn>(auxActor);
			if (auxActor && auxActor->GetDistanceTo(this) <= ExplosionRadius) {
				SetActorScale3D(FVector(10.0f, 10.0f, 2.0f));
				auxActor->Destroy();
			}
		}

		//segundo metodo
		
		//tomar todos los objetos que esten en un radio de explosion
		//TArray<AActor*> actores;
		//GetOverlappingActors(actores);
		////verificar si mi nave pawn esta en ese radio
		//for (int32 iActor = 0; iActor < actores.Num(); iActor++)
		//{
		//	//mostrar los actores que estan en el radio de explosion
		//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, actores[iActor]->GetName());

		//	//si mi nave esta en el radio de explosion
		//	if (actores[iActor]->IsA(AGalaga_USFX_L01Pawn::StaticClass()))
		//	{
		//		//destruir la nave
		//		actores[iActor]->Destroy();
		//		Destroy();
		//	}
		//}
	}
}

