#include "SortingLibrary.h"

TArray<FEquipment> USortingLibrary::SortEquipmentByDamage(TArray<FEquipment> equipmentArray, bool descending) {
    equipmentArray.Sort([descending](const FEquipment& a, const FEquipment& b)
        {
            return descending ? a.Damage > b.Damage : a.Damage < b.Damage;
        });
    return equipmentArray;
}

TArray<FEquipment> USortingLibrary::SortEquipmentByLevel(TArray<FEquipment> equipmentArray, bool descending) {
    equipmentArray.Sort([descending](const FEquipment& a, const FEquipment& b)
        {
            if (a.RequiredLevel == b.RequiredLevel)
            {
                return descending ? a.Price > b.Price : a.Price < b.Price;
            }
            return descending ? a.RequiredLevel > b.RequiredLevel : a.RequiredLevel < b.RequiredLevel;
        });
    return equipmentArray;
}