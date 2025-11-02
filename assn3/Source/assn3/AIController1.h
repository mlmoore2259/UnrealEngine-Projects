// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "AIController.h"
#include "AIController1.generated.h"

/**
 * 
 */
UCLASS()
class ASSN3_API AAIController1 : public AAIController
{
	GENERATED_BODY()

public:

	AAIController1() {
		PrimaryActorTick.bCanEverTick = true;
	}

	UPROPERTY(EditAnywhere)
	float NeighborhoodRadius = 300.0f;

	UPROPERTY()
	USphereComponent* SphereComponent;

	UPROPERTY(VisibleAnywhere, Transient)
	TSet<AActor*> Neighbors = TSet<AActor*>();

<<<<<<< HEAD
	UPROPERTY(EditAnywhere)
	float RuleOneCoeff = 0.03f;

	UPROPERTY(EditAnywhere)
	float RuleTwoCoeff = 0.1f;

	UPROPERTY(EditAnywhere)
	float RuleThreeCoeff = 0.1f;

	UPROPERTY(EditAnywhere)
	float MaxSpeed = 300.0f;

	FVector BoidRuleOne(AActor* boid);	

	FVector BoidRuleTwo(AActor* boid);

	FVector BoidRuleThree(AActor* boid);

	virtual void Tick(float DeltaSeconds) override;

	//void OnUnPossess() override;

=======
>>>>>>> 76bb4959976920660a59940a9ed3be1cff548c19
	UFUNCTION()
	void AddNeighbors(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void RemoveNeighbors(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	virtual void AttachToPawn(APawn* pawn) override;
private:

};
