// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovimientoBomba.h"
#include "Galaga_USFX_L01Pawn.h"
#include "Bomba.generated.h"
class UProjectileMovementComponent;
class UMovimientoBomba;

UCLASS()
class GALAGA_USFX_L01_API ABomba : public AActor
{
	GENERATED_BODY()
	class UStaticMeshComponent* mallabala;
	
public:	
	// Sets default values for this actor's properties

	ABomba();
	float tmp = 0;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UMovimientoBomba* bomba1;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true")) 
	UProjectileMovementComponent* ProjectileMovement;
	
	void DestroyBomba();
	UFUNCTION() 
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	void aumentarTamano();
	void ActCrecimiento();
private:
	bool IncTam=false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};