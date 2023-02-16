// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacter.h"

// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 카메라를 생성하는 코드
	FPSCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	check(nullptr != FPSCameraComponent);

	// 카메라를 생성해서 캡슐에 붙이는 코드
	FPSCameraComponent->SetupAttachment(CastChecked<USceneComponent, UCapsuleComponent>(GetCapsuleComponent()));

	// 카메라를 조금 위로 이동
	FPSCameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f + BaseEyeHeight));

	// 카메라를 컨트롤러에 따라 회전을 시킬것인지에 대한 설정
	FPSCameraComponent->bUsePawnControlRotation = true;

	// 매쉬 생성
	FPSMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMesh"));
	check(nullptr != FPSMesh);

	// 오직 플레이어에게만 보이게 해라
	FPSMesh->SetOnlyOwnerSee(true);

	// 카메라에 해당 메쉬를 부착시킨다.
	FPSMesh->SetupAttachment(FPSCameraComponent);

	// Disable some environmental shadows to preserve the illusion of having a single mesh
	// 일부 그림자 환경을 비활성화 해서 단일 메시가 있다는 것을 못느끼게 설정
	FPSMesh->bCastDynamicShadow = false;
	FPSMesh->CastShadow = false;

	// 3인칭 BodyMesh 를 볼 수 없도록 설정한다.
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

	// 앞 뒤 양 옆 이동 할당
	PlayerInputComponent->BindAxis("MoveFoward", this, &AFPSCharacter::MoveFoward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);

	// 마우스에 따른 회전 할당
	PlayerInputComponent->BindAxis("Turn", this, &AFPSCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &AFPSCharacter::AddControllerPitchInput);

	// 점프 할당
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AFPSCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AFPSCharacter::StopJump);
}

// 앞뒤로 움직이는 함수 구현
void AFPSCharacter::MoveFoward(float Value)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);
}

// 오른쪽 왼쪽으로 움직이는 함수 구현
void AFPSCharacter::MoveRight(float Value)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, Value);

}

// 점프 
void AFPSCharacter::StartJump()
{
	bPressedJump = true;
}

// 점프
void AFPSCharacter::StopJump()
{
	bPressedJump = false;
}

