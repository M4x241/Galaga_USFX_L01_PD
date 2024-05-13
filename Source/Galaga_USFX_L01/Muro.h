// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Components/PrimitiveComponent.h" 
#include "Muro.generated.h"

class UProjectileMovementComponent;
UCLASS()
class GALAGA_USFX_L01_API AMuro : public AActor
{
	GENERATED_BODY()
	UStaticMeshComponent* Muro;
private:
	float velocidad=800.0;
public:	
	// Sets default values for this actor's properties
	AMuro();
	UProjectileMovementComponent* ProjectileMovement;
	UBoxComponent* BoxComponent;
	TArray<FVector> puntosobjetivos;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override; 
	int derecha = -21;
	int arriba = 21;
	int typeColision = 0;
	void setvelocidad(float _velocidad) { velocidad = _velocidad; };
	void colisionActiva(int _typeColision);
	void mover();
	void moverarriba(); 
	void moverLateral(float DeltaTime);
	void moverArriba(float DeltaTime);
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit); 
	void EnablePhysicsSimulation();
	UFUNCTION()
	virtual void NotifyHit(class UPrimitiveComponent* MyComp,
		AActor* Other, class UPrimitiveComponent* OtherComp,
		bool bSelfMoved, FVector HitLocation, FVector
		HitNormal, FVector NormalImpulse, const FHitResult&
		Hit) override; 
	//begin overlap
	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
