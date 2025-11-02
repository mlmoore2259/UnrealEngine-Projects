// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "MazeActor.generated.h"

UCLASS()
class ASSN2_API AMazeActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMazeActor();

protected:

public:
	// Struct to hold cell information for logical deletion/creation
	struct Cell {
		int identifier;
		bool visited = false;
		bool NorthWall = true;
		bool SouthWall = true;
		bool EastWall = true;
		bool WestWall = true;
	};

	virtual void OnConstruction(const FTransform& Transform) override;

	// Removes a wall logically in order to render the maze at the end
	void RemoveWallLogic(Cell& curr, Cell& next, int currX, int currY, int xDir, int yDir, int size);

	// Returns an array of the possible directions a cell can go
	TArray<int> CheckNeighbors(TMap<int, Cell>& grid, int size, int key);

	// Generate a maze using the algorithm, uses MazeSize and RandomSeed variables
	void GenerateMaze(int size, int seed);

	// Places a wall at the given location, vertical or horizontal
	void PlaceWall(UInstancedStaticMeshComponent* Mesh, bool Vertical, float x, float y, float z);

	// Creates a simple 3x3 grid, no algorithm is used. Mainly for incremental development.
	void Create3x3Maze();

	// Creaets the walls based on the logical grid
	void RenderMaze(TMap<int, Cell>& grid, int size);

	UPROPERTY()
	TObjectPtr<USceneComponent> RootSceneComponent;

	UPROPERTY()
	TObjectPtr<UInstancedStaticMeshComponent> ISMComponent;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UMaterialInterface> MaterialAsset;

	// Square size of the maze
	UPROPERTY(EditAnywhere)
	int MazeSize = 5;

	// Seed for maze generation
	UPROPERTY(EditAnywhere)
	int RandomSeed = 1234;
};