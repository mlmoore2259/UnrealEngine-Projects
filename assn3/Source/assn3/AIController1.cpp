// Fill out your copyright notice in the Description page of Project Settings.


#include "AIController1.h"

void AAIController1::AttachToPawn(APawn* pawn) {
	if (!pawn) {
		UE_LOG(LogTemp, Warning, TEXT("No Pawn to attach to"));
		return;
	}
	Super::AttachToPawn(pawn);
	SphereComponent = NewObject<USphereComponent>(pawn);
	SphereComponent->InitSphereRadius(NeighborhoodRadius);
	SphereComponent->AttachToComponent(pawn->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	SphereComponent->RegisterComponent();

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AAIController1::AddNeighbors);
	SphereComponent->OnComponentEndOverlap.AddDynamic(this, &AAIController1::RemoveNeighbors);
}

void AAIController1::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	APawn* pawn = GetPawn();
	FVector v1 = BoidRuleOne(pawn);
	FVector v2 = BoidRuleTwo(pawn);
	FVector v3 = BoidRuleThree(pawn);
	FVector newVelocity = pawn->GetVelocity() + v1 + v2 + v3;
	if (newVelocity.Size() > MaxSpeed) {
		newVelocity = newVelocity.GetSafeNormal() * MaxSpeed;
	}
	pawn->AddMovementInput(newVelocity.GetSafeNormal(), newVelocity.Size() * DeltaSeconds);
}

void AAIController1::AddNeighbors(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	if (OtherActor && OtherActor != GetPawn()) {
		Neighbors.Add(OtherActor);
	}
	UE_LOG(LogTemp, Warning, TEXT("Neighbor Added: %s | Total: %d"),
		*OtherActor->GetName(),
		Neighbors.Num());
}

void AAIController1::RemoveNeighbors(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
<<<<<<< HEAD
	if (OtherActor && OtherActor != GetPawn() && Neighbors.Contains(OtherActor)) {
=======
	if (OtherActor && OtherActor != GetPawn()) {
>>>>>>> 76bb4959976920660a59940a9ed3be1cff548c19
		Neighbors.Remove(OtherActor);
	}
	UE_LOG(LogTemp, Warning, TEXT("Neighbor Removed: %s | Total: %d"),
		*OtherActor->GetName(),
		Neighbors.Num());
<<<<<<< HEAD
}

FVector AAIController1::BoidRuleOne(AActor* boid) {
	// Boid rule 1: Try to move towards the center of mass of neighbors
	FVector pc = FVector::ZeroVector;
	int count = 0;
	for (AActor* neighbor : Neighbors) {
		if (neighbor && neighbor != boid) {
			pc = pc + neighbor->GetActorLocation();
			count++;
		}
	}
	if (count == 0) {
		return FVector::ZeroVector;
	}
	pc = pc / count;
	return (pc - boid->GetActorLocation()) * RuleOneCoeff;
}

FVector AAIController1::BoidRuleTwo(AActor* boid) {
	// Boid rule 2: Boids try to keep a small distance from each other
	FVector c = FVector::ZeroVector;
	for (AActor* neighbor : Neighbors) {
		if (neighbor != boid) {
			FVector offset = neighbor->GetActorLocation() - boid->GetActorLocation();
			float distance = offset.Size();
			if (distance < 50.0f && distance > 0) {
				c = c - (offset / distance);
			}
		}
	}
	return c * RuleTwoCoeff;
}

FVector AAIController1::BoidRuleThree(AActor* boid) {
	// Boid rule 3: Boids try to match velocity with near boids
	FVector pv = FVector::ZeroVector;
	int count = 0;
	for (AActor* neighbor : Neighbors) {
		if (neighbor && neighbor != boid) {
			pv = pv + neighbor->GetVelocity();
			count++;
		}
	}
	if (count == 0) {
		return FVector::ZeroVector;
	}
	pv = pv / count;
	return (pv - boid->GetVelocity()) * RuleThreeCoeff;
}
=======
}	
>>>>>>> 76bb4959976920660a59940a9ed3be1cff548c19
