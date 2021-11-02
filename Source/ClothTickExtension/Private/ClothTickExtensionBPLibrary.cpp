
#include "ClothTickExtensionBPLibrary.h"
#include "ClothTickExtension.h"

UClothTickExtensionBPLibrary::UClothTickExtensionBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}
void UClothTickExtensionBPLibrary::SetTickableWhenPausedCloth(const TArray<USkeletalMeshComponent*>& SkeletalMeshes, bool bTickableWhenPaused)
{
	for (int32 CompIdx = 0; CompIdx < SkeletalMeshes.Num(); ++CompIdx)
	{
		USkeletalMeshComponent* const C = SkeletalMeshes[CompIdx];
		if (C)
		{
			C->ClothTickFunction.bTickEvenWhenPaused = bTickableWhenPaused;
		}
	}
}

bool UClothTickExtensionBPLibrary::GetIsTickableWhenPausedCloth(USkeletalMeshComponent* SkeletalMesh)
{
	USkeletalMeshComponent* C = SkeletalMesh;
	if (C) {
		return C->ClothTickFunction.bTickEvenWhenPaused;
	}
	return false;
}
