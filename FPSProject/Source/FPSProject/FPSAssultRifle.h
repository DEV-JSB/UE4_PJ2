// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSAssultRifle.generated.h"




UCLASS()
class FPSPROJECT_API AFPSAssultRifle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSAssultRifle();

public:
	void StartFire();
public:
	USkeletalMeshComponent* GetMesh() const;
public:
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* WeaponMesh;

};
