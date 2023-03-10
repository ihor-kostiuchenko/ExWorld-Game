// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "FindPatrolPoints.generated.h"

/**
 * 
 */
UCLASS()
class DEMOTEST_API UFindPatrolPoints : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:
	UFindPatrolPoints(const FObjectInitializer& ObjectInitializer);
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& owner_comp, uint8* node_memory) override;
	
};
