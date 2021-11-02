
#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/SkeletalMeshComponent.h"
#include "ClothTickExtensionBPLibrary.generated.h"


UCLASS()
class UClothTickExtensionBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Tickable when Paused Cloth", Keywords = "ClothTickExtension tick cloth"), Category = "ClothTickExtension")
		static void SetTickableWhenPausedCloth(const TArray<USkeletalMeshComponent*>& SkeletalMeshes, bool bTickableWhenPaused);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Is Tickable when Paused Cloth", Keywords = "ClothTickExtension tick cloth"), Category = "ClothTickExtension")
		static bool GetIsTickableWhenPausedCloth(USkeletalMeshComponent* SkeletalMesh);
};
