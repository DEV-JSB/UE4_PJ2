// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "FPSProjectile.h"
#include "FPSCharacter.generated.h"


class AFPSAssultRifle;

UCLASS()
class FPSPROJECT_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
	UFUNCTION()
		void MoveFoward(float Value);
	UFUNCTION()
		void MoveRight(float Value);
	UFUNCTION()
		void StartJump();
	UFUNCTION()
		void StopJump();
	UFUNCTION()
		void Fire();
public:
	// ī�޶� ������Ʈ
	UPROPERTY(VisibleAnywhere)
		UCameraComponent* FPSCameraComponent;
	// Fps Ư���� ����� �Ž�
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* FPSMesh;
	// �ѱ��� ��ġ
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector MuzzleOffset;
	// �Ѿ� Ŭ����
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class AFPSProjectile> ProjectileClass;
	
	UPROPERTY(EditDefaultsOnly, Category = Weapon)
		TSubclassOf<class AFPSAssultRifle> Weapon;	

};
