// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

class ATank;

UCLASS()
class BATTLETANKSCPP_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
	ATank * GetControlledTank() const;

	virtual void BeginPlay() override;
	
	ATank * GetPlayerTank() const;


private:

	virtual void Tick(float DeltaTime) override;
};
