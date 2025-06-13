// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ArrowComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Particles/ParticleSystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "GunBase.generated.h"

UCLASS()
class MOVEMENT_REMAKE_API AGunBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGunBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere, Category = "Components")
	UStaticMeshComponent *GunMesh;
	UPROPERTY(EditAnywhere, Category = "Components")
	UParticleSystemComponent *MuzzleFlash;
	UPROPERTY(EditAnywhere, Category = "Components")
	UArrowComponent *ArrowComponent;

	// Hipfire Spread factor
	UPROPERTY(EditAnywhere, Category = "Gun behavior")
	float HipSpread;
	// Aim down sight spread factor
	UPROPERTY(EditAnywhere, Category = "Gun behavior")
	float AimSpread;
	// Weapon Damage
	UPROPERTY(EditAnywhere, Category = "Gun behavior")
	float Damage;
	// Fire rate
	UPROPERTY(EditAnywhere, Category = "Gun behavior")
	float FireRate;
	// Magazine Size
	UPROPERTY(EditAnywhere, Category = "Gun behavior")
	float MagSize;
	// Total Ammo for gun
	UPROPERTY(EditAnywhere, Category = "Gun behavior")
	float TotalAmmo;

};
