// Fill out your copyright notice in the Description page of Project Settings.


#include "TankTrack.h"

void UTankTrack::SetThrottle(float Throttle)
{
	auto Name = GetName();
	UE_LOG(LogTemp, Warning, TEXT("     %s : Working at speed : %f"), *Name, Throttle)

	// TODO Clamp Actual Throttle Value So player Can't over-Drive
}