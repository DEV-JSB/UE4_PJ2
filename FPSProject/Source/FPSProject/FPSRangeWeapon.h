// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSRangeWeapon.generated.h"

UCLASS(Abstract)
class FPSPROJECT_API AFPSRangeWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSRangeWeapon();
	//
	AFPSRangeWeapon(const int32 ammo);
protected:
	UPROPERTY(EditDefaultsOnly, Category = WeaponInfo)
		int32 MaxAmmo;
	UPROPERTY(EditDefaultsOnly, Category = WeaponInfo)
		int32 CurrentAmmo;
};
