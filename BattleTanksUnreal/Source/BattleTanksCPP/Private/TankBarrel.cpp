// Fill out your copyright notice in the Description page of Project Settings.

#include "TankBarrel.h"




void UTankBarrel::Elevate(float DegreesPerSecond)
{
	UE_LOG(LogTemp, Warning, TEXT("Barrel->Elevate() Called elevating at: %f"), DegreesPerSecond);

	// Move the barrel the right amount this frame
	// Given a max elevation speed and the frame time

}