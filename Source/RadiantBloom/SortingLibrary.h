#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Equipment.h"
#include "SortingLibrary.generated.h"

/**
 * 
 */
UCLASS()
class RADIANTBLOOM_API USortingLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Sorting")
	static TArray<FEquipment> SortEquipmentByDamage(TArray<FEquipment> equipmentArray, bool descending);

	UFUNCTION(BlueprintCallable, Category = "Sorting")
	static TArray<FEquipment> SortEquipmentByLevel(TArray<FEquipment> equipmentArray, bool descending);
};
