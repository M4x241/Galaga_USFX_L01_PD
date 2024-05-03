// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "NaveEnemiga.h"
#include "Stage1.h"
#include "EscenarioEnginer.h"
#include "HighScore.h"
#include "GeneradorNaves.generated.h"
class ANaveEnemiga;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_USFX_L01_API UGeneradorNaves : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGeneradorNaves();
	FORCEINLINE void generarNave();
	FORCEINLINE void NotEnemy();
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
private:
	TArray<ANaveEnemiga*> TANaveEnemigamix;
public:
	int level=1	;
	//buiolder
	AEscenarioEnginer* Enginer;
	AStage1* stage1;
	bool pase=true;
	AHighScore* highScore;
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
