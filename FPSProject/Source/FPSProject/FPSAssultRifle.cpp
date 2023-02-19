// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSAssultRifle.h"

// Sets default values
AFPSAssultRifle::AFPSAssultRifle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_MESH(TEXT("/Game/FPS_Weapon_Bundle/Weapons/Meshes/AR4/SK_AR4.SK_AR4"));
	if (SK_MESH.Succeeded())
		WeaponMesh->SetSkeletalMesh(SK_MESH.Object);

}

void AFPSAssultRifle::StartFire()
{
	GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Yellow, TEXT("Fire!!!"));

}

USkeletalMeshComponent* AFPSAssultRifle::GetMesh() const
{
	if (nullptr != WeaponMesh)
		return WeaponMesh;
	else
		return nullptr;
}
