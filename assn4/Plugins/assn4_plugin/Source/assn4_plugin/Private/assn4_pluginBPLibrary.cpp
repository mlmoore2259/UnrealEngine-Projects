// Copyright Epic Games, Inc. All Rights Reserved.

#include "assn4_pluginBPLibrary.h"
#include "assn4_plugin.h"

FPointData Uassn4_pluginBPLibrary::MakeBlueNoiseStream(int seed, FVector2D RangeX, FVector2D RangeY) {
	// Native make function for the FPointData struct
	FPointData pointData;
	pointData.RandomStream.Initialize(seed);
	pointData.RangeX = RangeX;
	pointData.RangeY = RangeY;
	return pointData;
}

float Uassn4_pluginBPLibrary::FindDistance(FPointData& pointData, FVector A, FVector B) {
	// Compute distance with wrap around using math from the given blog post
	// Adjusted to account for variable world size
	float dx = std::abs(A.X - B.X);
	float dy = std::abs(A.Y - B.Y);

	float worldWidth = pointData.RangeX.Y - pointData.RangeX.X;
	float worldHeight = pointData.RangeY.Y - pointData.RangeY.X;

	if (dx > worldWidth * 0.5f) {
		dx = worldWidth - dx;
	}
	if (dy > worldHeight * 0.5f) {
		dy = worldHeight - dy;
	}

	return FMath::Sqrt(dx * dx + dy * dy);
}

FVector Uassn4_pluginBPLibrary::GeneratePoint(FPointData& pointData) {
	// Randomly generate a point vector
	float x = pointData.RandomStream.FRandRange(pointData.RangeX.X, pointData.RangeX.Y);
	float y = pointData.RandomStream.FRandRange(pointData.RangeY.X, pointData.RangeY.Y);
	return FVector(x, y, 0.0f);
}

FVector Uassn4_pluginBPLibrary::MitchellsBestCandidate(FPointData& pointData) {
	FVector bestCandidate;
	if (pointData.Points.Num() == 0) {
		bestCandidate = GeneratePoint(pointData);
	}
	else {
		// Use the last point in the array as the current point
		FVector currPoint = FVector(pointData.Points[pointData.Points.Num() - 1].X, pointData.Points[pointData.Points.Num() - 1].Y, 0.0f);
		int pointCount = pointData.Points.Num();
		int numCandidates = 5 * pointCount;
		TArray<FVector> possibleCandidates;

		// Generate possible candidates
		for (int i = 0; i < numCandidates; i++) {
			FVector candidate = GeneratePoint(pointData);
			possibleCandidates.Add(candidate);
		}

		// Find the best candidate
		float largestMinDist = 0;
		for (FVector& candidate : possibleCandidates) {
			float minDist = FLT_MAX;
			for (FVector2D& point : pointData.Points) {
				float dist = FindDistance(pointData, candidate, FVector(point.X, point.Y, 0.0f));
				if (dist < minDist) {
					minDist = dist;
				}
			}
			if (minDist > largestMinDist) {
				largestMinDist = minDist;
				bestCandidate = candidate;
			}
		}
	}
	pointData.Points.Add(FVector2D(bestCandidate.X, bestCandidate.Y));
	return bestCandidate;
}

Uassn4_pluginBPLibrary::Uassn4_pluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float Uassn4_pluginBPLibrary::assn4_pluginSampleFunction(float Param)
{
	return -1;
}

