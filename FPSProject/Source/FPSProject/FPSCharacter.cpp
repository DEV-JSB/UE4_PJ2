// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacter.h"

// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// ī�޶� �����ϴ� �ڵ�
	FPSCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	check(nullptr != FPSCameraComponent);

	// ī�޶� �����ؼ� ĸ���� ���̴� �ڵ�
	FPSCameraComponent->SetupAttachment(CastChecked<USceneComponent, UCapsuleComponent>(GetCapsuleComponent()));

	// ī�޶� ���� ���� �̵�
	FPSCameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f + BaseEyeHeight));

	// ī�޶� ��Ʈ�ѷ��� ���� ȸ���� ��ų�������� ���� ����
	FPSCameraComponent->bUsePawnControlRotation = true;

	// �Ž� ����
	FPSMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMesh"));
	check(nullptr != FPSMesh);

	// ���� �÷��̾�Ը� ���̰� �ض�
	FPSMesh->SetOnlyOwnerSee(true);

	// ī�޶� �ش� �޽��� ������Ų��.
	FPSMesh->SetupAttachment(FPSCameraComponent);

	// Disable some environmental shadows to preserve the illusion of having a single mesh
	// �Ϻ� �׸��� ȯ���� ��Ȱ��ȭ �ؼ� ���� �޽ð� �ִٴ� ���� �������� ����
	FPSMesh->bCastDynamicShadow = false;
	FPSMesh->CastShadow = false;

	// 3��Ī BodyMesh �� �� �� ������ �����Ѵ�.
	GetMesh()->SetOwnerNoSee(true);

}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	check(GEngine != nullptr);

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using FPSCharacter"));
}

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// �� �� �� �� �̵� �Ҵ�
	PlayerInputComponent->BindAxis("MoveFoward", this, &AFPSCharacter::MoveFoward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);

	// ���콺�� ���� ȸ�� �Ҵ�
	PlayerInputComponent->BindAxis("Turn", this, &AFPSCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &AFPSCharacter::AddControllerPitchInput);

	// ���� �Ҵ�
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AFPSCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AFPSCharacter::StopJump);
}

// �յڷ� �����̴� �Լ� ����
void AFPSCharacter::MoveFoward(float Value)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);
}

// ������ �������� �����̴� �Լ� ����
void AFPSCharacter::MoveRight(float Value)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, Value);

}

// ���� 
void AFPSCharacter::StartJump()
{
	bPressedJump = true;
}

// ����
void AFPSCharacter::StopJump()
{
	bPressedJump = false;
}

