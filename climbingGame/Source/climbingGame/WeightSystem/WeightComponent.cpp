
#include "climbingGame/WeightSystem/WeightComponent.h"
#include "WeightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "DrawDebugHelpers.h"
// Sets default values for this component's properties
UWeightComponent::UWeightComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
}
// Called when the game starts
void UWeightComponent::BeginPlay()
{
	Super::BeginPlay();
	if (!Cast<APawn>(GetOwner()))
	{
		MeshComponent = GetOwner()->FindComponentByClass<UStaticMeshComponent>();
		if (MeshComponent)
		{
			// Get the bounds of the mesh (in world space)
			FBoxSphereBounds MeshBounds = MeshComponent->CalcBounds(MeshComponent->GetComponentTransform());

			// Use the SphereRadius from the bounds
			NewTraceRadius = MeshBounds.SphereRadius;
		}
		else NewTraceRadius = TraceRadius;
	}

}


// Called every frame
void UWeightComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}


void UWeightComponent::HandleHitEvent(AActor* HittingActor)
{
	if (HittingActor && !CheckActorZVelocity(HittingActor) && !BelowObjectWeightComponent && !bIsUpdatingWeight)
	{
		UWeightComponent* HitWeightComponent = Cast<UWeightComponent>(HittingActor->GetComponentByClass(UWeightComponent::StaticClass()));
		if (!HitWeightComponent) return;
		// Check for object below
		bIsUpdatingWeight = true;
		CheckForBelowObject();
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Magenta, "Updating weight ......");
	}
}
void UWeightComponent::CheckForBelowObject()
{
	FHitResult TraceHitResultBelow = TraceForObjectBelow();
	if (TraceHitResultBelow.bBlockingHit)
	{
		UpdateBelowComponent(TraceHitResultBelow);
	}
	return;
}

void UWeightComponent::UpdateBelowComponent(FHitResult Hit)
{
	// cast to get weight component of object below this object
	if (BelowObjectWeightComponent && BelowObjectWeightComponent->GetAggregatedWeight() - AggregatedWeight ==
		BelowObjectWeightComponent->GetObjectWeight()) return;
	BelowObjectWeightComponent = Cast<UWeightComponent>
		(Hit.GetActor()->GetComponentByClass(UWeightComponent::StaticClass()));

	if (!BelowObjectWeightComponent) return; // return if weight component is invalid for below object
	// continue otherwise
	BelowObject = BelowObjectWeightComponent->GetOwner(); // set actor for blueprint stuff

	BelowObjectWeightComponent->SetAggregatedWeight(AggregatedWeight + BelowObjectWeightComponent->GetObjectWeight());
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Magenta, "Weight Updated");
	bIsUpdatingWeight = false;
}

void UWeightComponent::HandleAboveObjectMovedAway(AActor* EndOverlapObject)
{
	UWeightComponent* OverlappedComp = Cast<UWeightComponent>(EndOverlapObject->GetComponentByClass(UWeightComponent::StaticClass()));
	if (OverlappedComp)
	{
		SetAggregatedWeight(BelowObjectWeightComponent->GetObjectWeight());
	}
}
void UWeightComponent::SetAggregatedWeight(float NewAggregatedWeight)
{
	AggregatedWeight = NewAggregatedWeight;
	CheckForBelowObject();
}


bool UWeightComponent::CheckActorZVelocity(AActor* HitByActor)
{
	return HitByActor && FMath::IsNearlyZero(HitByActor->GetVelocity().Z);
}

float UWeightComponent::GetObjectWeight()
{
	return ObjectWeight;
}

float UWeightComponent::GetAggregatedWeight()
{
	return AggregatedWeight;
}



FHitResult UWeightComponent::TraceForObjectBelow()
{
	const FVector TraceStart = GetOwner()->GetActorLocation();
	const FVector TraceEnd = TraceStart - GetOwner()->GetActorUpVector() * 200.0f;
	return DoLineTrace(TraceStart, TraceEnd);
}



FHitResult UWeightComponent::DoLineTrace(FVector StartPoint, FVector EndPoint, bool ShowTraces)
{
	FHitResult Hit;
	EDrawDebugTrace::Type DebugTraceType = EDrawDebugTrace::None;
	if (bShowDebugData)
	{
		if (ShowTraces)DebugTraceType = EDrawDebugTrace::Persistent;
	}
	UKismetSystemLibrary::SphereTraceSingleForObjects
	(this,
		StartPoint,
		EndPoint,
		NewTraceRadius,
		TracedObjectTypes,
		false,
		TArray<AActor*>(),
		DebugTraceType,
		Hit,
		true,
		FColor::Transparent,
		FColor::Red,
		7.0f
	);
	DrawDebugSphere(GetWorld(), Hit.ImpactPoint, 12.0f, 12, FColor::Emerald, true);
	return Hit;
}

