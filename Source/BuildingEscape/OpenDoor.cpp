// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"


// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	// Find the owning actor
	// Store in a var called Owner
	// Try and access the Owner's rotation
	// At least 2 ways to do this
	
	AActor* Owner{ GetOwner() };
	FRotator NewRotation{ 0.f, 60.f, 0.f };
	Owner->SetActorRotation(NewRotation);

	//OwnerRotation.SetComponentForAxis(EAxis::Z, 80.f);
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
