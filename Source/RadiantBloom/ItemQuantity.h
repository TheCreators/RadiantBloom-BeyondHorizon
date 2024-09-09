#pragma once

#include "CoreMinimal.h"
#include "ItemQuantity.generated.h"

USTRUCT(BlueprintType)
struct FItemQuantity
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FDataTableRowHandle Item;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int Quantity = 1;
};
