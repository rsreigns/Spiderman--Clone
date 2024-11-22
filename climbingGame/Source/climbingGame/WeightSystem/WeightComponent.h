#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeightComponent.generated.h"

class AActor;
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class CLIMBINGGAME_API UWeightComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UWeightComponent();
	UFUNCTION(BlueprintCallable)
	void HandleHitEvent(AActor* HittingActor);
	UFUNCTION(BlueprintCallable)
	void HandleAboveObjectMovedAway(AActor* EndOverlapObject);
	FHitResult TraceForObjectBelow();
	void CheckForBelowObject();
	FHitResult DoLineTrace(FVector StartPoint, FVector EndPoint, bool ShowTraces = false);
	bool CheckActorZVelocity(AActor* HitByActor);
	void UpdateBelowComponent(FHitResult Hit);
	float GetObjectWeight();
	float GetAggregatedWeight();

	void SetAggregatedWeight(float NewAggregatedWeight);
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	UPROPERTY()
	AActor* HitActor;
	// Weight Component

	UPROPERTY(BlueprintReadOnly, Category = "Weight", meta = (AllowPrivateAccess = "true"))
	UWeightComponent* BelowObjectWeightComponent;

	UPROPERTY(BlueprintReadOnly, Category = "Weight", meta = (AllowPrivateAccess = "true"))
	AActor* BelowObject;
	UStaticMeshComponent* MeshComponent;
	bool bShouldTrace;
	UPROPERTY(EditDefaultsOnly, Category = "Weight", meta = (AllowPrivatAccess = "true"))
	bool bShowDebugData = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Weight", meta = (AllowPrivateAccess = "true"))
	float ObjectWeight = 10.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Weight", meta = (AllowPrivateAccess = "true"))
	float AggregatedWeight = 10.0f;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Weight", meta = (AllowPrivateAccess = "true"))
	float TraceRadius = 20.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Weight", meta = (AllowPrivateAccess = "true"))
	float NewTraceRadius;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Weight", meta = (AllowPrivateAccess = "true"))
	TArray<TEnumAsByte<EObjectTypeQuery> > TracedObjectTypes;

	bool bIsUpdatingWeight = false;
public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


};
