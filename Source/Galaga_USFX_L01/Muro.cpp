// Fill out your copyright notice in the Description page of Project Settings.


#include "Muro.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
AMuro::AMuro()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Shapes/Shape_Cube.Shape_Cube'")); 
	//Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    Muro = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = Muro;
	Muro->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
    Muro->SetStaticMesh(ShipMesh.Object);
	//Muro->OnComponentHit.AddDynamic(this, &AMuro::OnHit);		// set up a notification for when this component hits something
	//Muro->OnComponentBeginOverlap.AddDynamic(this, &AMuro::OnOverlapBegin); // set up a notification for when this component overlaps something
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	BoxComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	BoxComponent->SetupAttachment(RootComponent);
	//BoxComponent->OnComponentHit.AddDynamic(this, &AMuro::OnHit);    // set up a notification for when this component hits something
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AMuro::OnOverlapBegin); // set up a notification for when this component overlaps something

	// Set the size of the BoxComponent
	BoxComponent->SetBoxExtent(FVector(5.0f, 4.0f, 10.0f));

    // Rest of the code...
 //   Muro->SetWorldScale3D(FVector(5.0f, 30.0f, 20.0f));
 //   Muro->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics); // Activar la colisión 
 //   Muro->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block); // Configurar la respuesta de colisión 
 //   // set up a notification for when this component hits something
	////EnablePhysicsSimulation();
 //   ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
 //   ProjectileMovement->UpdatedComponent = Muro;
 //   ProjectileMovement->InitialSpeed = 2.f;
 //   ProjectileMovement->MaxSpeed = 3.f;
 //   ProjectileMovement->bRotationFollowsVelocity = true;
 //   ProjectileMovement->bShouldBounce = false;
    //ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity
}

// Called when the game starts or when spawned
void AMuro::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMuro::colisionActiva(int _typeColision)
{
	typeColision = _typeColision;
}

void AMuro::mover()
{
	derecha = 1;
}

void AMuro::moverarriba()
{
	arriba = 1;
}

void AMuro::moverLateral(float DeltaTime)
{
	//que se mueva de derecha a izquierda
	if (derecha!=-21) {
		if (derecha == 1)
		{
			SetActorLocation(GetActorLocation() + FVector(0.0f,800.0f*DeltaTime, 0.0f));
			if (GetActorLocation().Y > 1750) {
				derecha = 0;
			}
		}

		if (derecha == 0)
		{
			SetActorLocation(GetActorLocation() + FVector(0.0f, -800.0f*DeltaTime,  0.0f));
			if (GetActorLocation().Y < -1700) {
				derecha = 1;
			}
		}
	}
}

void AMuro::moverArriba(float DeltaTime)
{
	if (arriba != 21) {
		if (arriba == 1)
		{
			SetActorLocation(GetActorLocation() + FVector(800.0f * DeltaTime, 0.0f, 0.0f));
			if (GetActorLocation().X > 2250) {
				arriba = 0;
			}
		}

		if (arriba == 0)
		{
			SetActorLocation(GetActorLocation() + FVector(-800.0f * DeltaTime, 0.0f, 0.0f));
			if (GetActorLocation().X < -1700) {
				arriba = 1;
			}
		}
	}
}

void AMuro::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != nullptr)
	{	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Colision"));
		OtherActor->SetActorEnableCollision(true);
		OtherActor->SetActorLocation(FVector(1600, -2550, 200));
		//OtherActor->Destroy();
	}
}

void AMuro::EnablePhysicsSimulation()
{
	// Verifica si el componente raíz tiene la capacidad de simular física
	UPrimitiveComponent* RootPrimitiveComponent = Cast<UPrimitiveComponent>(RootComponent);
	if (RootPrimitiveComponent)
	{
		// Activa la simulación de física
		RootPrimitiveComponent->SetSimulatePhysics(true);
	}
}
void AMuro::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	// si recibe 1 destruye
	// si recibe 2 teletransporta

	if (typeColision == 1) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, TEXT("hit"));
		Other->Destroy();
	}
	else if (typeColision == 2) {
		Other->SetActorLocation(FVector(-1000, 2000, 200));
	}
}
void AMuro::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("overlap"));
}
// Called every frame
void AMuro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	moverLateral(DeltaTime);
	moverArriba(DeltaTime);
}

