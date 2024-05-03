// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BConstructorEscenario.h"
#include "HighScore.h"
#include "Stage1.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AStage1 : public AActor, public IBConstructorEscenario
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStage1();
private:
	class AEscenario* Escenario; //variable de la clase
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	AHighScore* HighScore;
	void setHighScore(AHighScore* _highScore) { HighScore = _highScore; };
	virtual void BuildEscenario1() override;
	virtual void BuildEscenario2() override;
	virtual void BuildEscenario3() override;
	virtual void BuildEscenario4() override;
};
