// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower.h"

void ATower::BeginPlay()
{
	Super::BeginPlay();
}

void ATower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Tank)
	{
		float Dist = FVector::Dist(Tank->GetActorLocation(), GetActorLocation());

		if (Dist <= FireRange)
		{
			RotateTurret(Tank->GetActorLocation());
		}
	}
}
