#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EquipmentType.h"
#include "ItemQuantity.h"
#include "Equipment.generated.h"

USTRUCT(BlueprintType)
struct FEquipment : public FTableRowBase
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString Name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TEnumAsByte<UEquipmentType> type;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	double Damage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	double ProtectionPercent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftObjectPtr<UStaticMesh> StaticMesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int RequiredLevel = 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere);
	int Price = -1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FItemQuantity> RequiredItems;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName Socket;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName UnequipedSocket;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName StartSocket = "Start";

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName EndSocket = "End";

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftObjectPtr<UMaterialInstance> Trail;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftObjectPtr<USoundBase> WhooshSound;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftClassPtr<AActor> Arrow;
};
