// Fill out your copyright notice in the Description page of Project Settings.

#include "MazeActor.h"

// Sets default values
AMazeActor::AMazeActor()
{
	// Create and set scene root component
	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
	RootComponent = RootSceneComponent;

	// Create and attach static mesh component to root component
	ISMComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("StaticMeshComponent"));
	ISMComponent->SetupAttachment(RootComponent);

	// Create and attach static mesh asset
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Engine/BasicShapes/Plane.Plane"));
	if (MeshAsset.Succeeded())
	{
		ISMComponent->SetStaticMesh(MeshAsset.Object);
	}

	// Create and set material asset
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> Material(TEXT("/Game/TestMaterial.TestMaterial"));
	if (Material.Succeeded())
	{
		MaterialAsset = Material.Object;
	}
}

void AMazeActor::PlaceWall(UInstancedStaticMeshComponent* Mesh, bool Vertical, float x, float y, float z)
{
	// Make wall stand up and turn it to be horizontal or vertical on the grid
	FRotator Rotation = Vertical ? FRotator(90.0f, 0.0f, 0.0f) : FRotator(0.0f, 0.0f, 90.0f);
	// PLace it at the location
	FVector Location = FVector(x, y, z + 50.0f);
	FTransform InstanceTransformation = FTransform(Rotation, Location);
	Mesh->AddInstance(InstanceTransformation);
}

void AMazeActor::RemoveWallLogic(Cell& curr, Cell& next, int currX, int currY, int xDir, int yDir, int size) {
	// East from current
	if (xDir == 1) {
		curr.EastWall = false;
		next.WestWall = false;
	}
	// West from current
	else if (xDir == -1) {
		curr.WestWall = false;
		next.EastWall = false;
	}
	// North from current
	else if (yDir == 1) {
		curr.NorthWall = false;
		next.SouthWall = false;
	}
	// South from current
	else if (yDir == -1) {
		curr.SouthWall = false;
		next.NorthWall = false;
	}
}

TArray<int> AMazeActor::CheckNeighbors(TMap<int, Cell>& grid, int size, int key) {
	// 1 = North, 2 = South, 3 = East, 4 = West
	TArray<int> directions; // Holds the possible directions the cell can go
	Cell* next;

	// Get the grid coordinates based on the key (identifier)
	int x = key % size;
	int y = key / size;

	// North 
	if (y - 1 >= 0) {
		next = grid.Find(key - size);
		if (next && !next->visited) directions.Add(1);
	}

	// South 
	if (y + 1 < size) {
		next = grid.Find(key + size);
		if (next && !next->visited) directions.Add(2);
	}

	// East 
	if (x + 1 < size) {
		next = grid.Find(key + 1);
		if (next && !next->visited) directions.Add(3);
	}

	// West 
	if (x - 1 >= 0) {
		next = grid.Find(key - 1);
		if (next && !next->visited) directions.Add(4);
	}

	// Entrance and exit
	if (key == 0) {
		grid.Find(key)->NorthWall = false;
	}
	if (key == (size * size) - 1) {
		grid.Find(key)->SouthWall = false;
	}
	return directions;
}

void AMazeActor::RenderMaze(TMap<int, Cell>& grid, int size) {
	// Starting point
	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;

	// Go through each cell and place the corresponding walls
	for (int i = 0; i < size; i++) {
		x = 0.0f;
		for (int j = 0; j < size; j++) {
			Cell* currCell = grid.Find((i * size) + j);
			// North Wall
			if (currCell->NorthWall) {
				this->PlaceWall(ISMComponent, false, x, y + 50.0f, z);
			}
			// South Wall
			if (currCell->SouthWall) {
				this->PlaceWall(ISMComponent, false, x, y - 50.0f, z);
			}
			// East Wall
			if (currCell->EastWall) {
				this->PlaceWall(ISMComponent, true, x + 50.0f, y, z);
			}
			// West Wall
			if (currCell->WestWall) {
				this->PlaceWall(ISMComponent, true, x - 50.0f, y, z);
			}
			x += 100.0f;
		}
		y -= 100.0f;
	}
}

void AMazeActor::GenerateMaze(int size, int seed) {
	// Create the grid and cells
	TMap<int, Cell> grid; // Logical map of the maze grid
	// Initialize grid with unvisited cells
	for (int i = 0; i < size * size; i++) {
		grid.Add(i, Cell(i));
	}

	TArray<Cell*> cellList; // List of visited cells

	// Start at a random cell
	FRandomStream randStream(seed);
	int currCellIndex = randStream.RandRange(0, size * size - 1);
	Cell* currCell = grid.Find(currCellIndex);
	currCell->visited = true;
	cellList.Add(currCell);

	while (cellList.Num() > 0) {
		TArray<int> directions = this->CheckNeighbors(grid, size, currCell->identifier);
		if (directions.Num() > 0) {
			currCell = cellList.Last();
			int direction = directions[randStream.RandRange(0, directions.Num() - 1)];
			int x = currCell->identifier % size;
			int y = currCell->identifier / size;
			switch (direction) {
				// North
			case 1:
				this->RemoveWallLogic(*currCell, *grid.Find(currCell->identifier - size), x, y, 0, 1, size);
				currCell = grid.Find(currCell->identifier - size);
				break;
				// South
			case 2:
				this->RemoveWallLogic(*currCell, *grid.Find(currCell->identifier + size), x, y, 0, -1, size);
				currCell = grid.Find(currCell->identifier + size);
				break;
				// East
			case 3:
				this->RemoveWallLogic(*currCell, *grid.Find(currCell->identifier + 1), x, y, 1, 0, size);
				currCell = grid.Find(currCell->identifier + 1);
				break;
				// West
			case 4:
				this->RemoveWallLogic(*currCell, *grid.Find(currCell->identifier - 1), x, y, -1, 0, size);
				currCell = grid.Find(currCell->identifier - 1);
				break;
			}
			currCell->visited = true;
			cellList.Add(currCell);
		}
		// Remove cell if it has no unvisited neighbors
		else {
			cellList.Pop();
			if (cellList.Num() > 0) {
				currCell = cellList.Last();
			}
		}
	}
	this->RenderMaze(grid, size);
}

void AMazeActor::Create3x3Maze()
{
	// Starting point
	float x = -100.0f;
	float y = 150.0f;
	float z = 0.0f;

	// Place horizontal walls
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			this->PlaceWall(ISMComponent, false, x, y, z);
			x += 100.0f;
		}
		x = -100.0f;
		y -= 100.0f;
	}

	// Starting point
	x = -150.0f;
	y = 100.0f;
	z = 0.0f;

	// Place Vertical Walls
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			this->PlaceWall(ISMComponent, true, x, y, z);
			x += 100.0f;
		}
		x = -150.0f;
		y -= 100.0f;
	}
}

void AMazeActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	if (MaterialAsset && ISMComponent)
	{
		ISMComponent->SetMaterial(0, MaterialAsset);
	}
	// Remove previous maze generation before making a new one
	if (ISMComponent)
	{
		ISMComponent->ClearInstances();
	}
	this->GenerateMaze(this->MazeSize, this->RandomSeed);
}


