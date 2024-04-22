// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomba.h"
#include "NaveEnemiga.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/ProjectileMovementComponent.h"
class ANaveEnemiga;

// Sets default values
ABomba::ABomba()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//mallabala = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	//mallabala->SetStaticMesh(ShipMesh.Object);
	//mallabala->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));

	// Create mesh component for the projectile sphere
	mallabala = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	mallabala->SetStaticMesh(ProjectileMeshAsset.Object);
	mallabala->SetupAttachment(RootComponent);
	mallabala->BodyInstance.SetCollisionProfileName("Projectile");
	mallabala->OnComponentHit.AddDynamic(this, &ABomba::OnHit);		// set up a notification for when this component hits something
	RootComponent = mallabala;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
	ProjectileMovement->UpdatedComponent = mallabala;
	ProjectileMovement->InitialSpeed = 0.f;
	ProjectileMovement->MaxSpeed = 0.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 3.f;

	/*mallabala->BodyInstance.SetCollisionProfileName("Projectile"); 
	mallabala->OnComponentHit.AddDynamic(this, &ABomba::OnHit);
	RootComponent = mallabala;
	PrimaryActorTick.bCanEverTick = true; 
	*/
	//bomba1 = CreateDefaultSubobject<UMovimientoBomba>(TEXT("Bombota"));
}

void ABomba::DestroyBomba()
{
		Destroy();

}

void ABomba::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Increase the size of the b
	//ActCrecimiento();
	SetActorScale3D(FVector(10,10,10));
	// Destroy all actors within explosion radius
	TArray<AActor*> ActorsToDestroy;
	FVector BombLocation = GetActorLocation();
	float ExplosionRadius = 5.0f; // Adjust this value as needed
	/*OtherActor = Cast<AGalaga_USFX_L01Pawn>(OtherActor);
	if (OtherActor) {
		OtherActor->Destroy();
	}*/

	// Get all actors within the explosion radius
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), ActorsToDestroy);

	for (AActor* Actor : ActorsToDestroy)
	{
		AActor *auxActor = Actor;
		Actor = Cast<ANaveEnemiga>(Actor);
		if (Actor && Actor->GetDistanceTo(this) <= ExplosionRadius)
		{
			Actor->Destroy();
		}
		else {
			auxActor=Cast<AGalaga_USFX_L01Pawn>(auxActor);
			if (auxActor && auxActor->GetDistanceTo(this) <= ExplosionRadius ) {
				auxActor->Destroy();
			}
		}
	}

	// Destroy the bomb after a delay
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ABomba::DestroyBomba, 1.0f, false);
}


void ABomba::aumentarTamano()
{
	if (IncTam) {
		for (int i = 0; i <= 50; i++) {
			SetActorScale3D(FVector(i, i, i));
		}
		IncTam = false;
	}
	
}
void ABomba::ActCrecimiento() {
	IncTam = true;
}

// Called when the game starts or when spawned
void ABomba::BeginPlay() 
{
	Super::BeginPlay(); 
}

// Called every frame
void ABomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); 
	aumentarTamano();
	//tmp += GetWorld()->DeltaTimeSeconds;
	//DestroyBomba();

}
