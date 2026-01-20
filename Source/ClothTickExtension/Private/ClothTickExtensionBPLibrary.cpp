// Copyright (c) 2026 SHQ. All rights reserved.

#include "ClothTickExtensionBPLibrary.h"

UClothTickExtensionBPLibrary::UClothTickExtensionBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}
void UClothTickExtensionBPLibrary::SetTickableWhenPausedCloth(const TArray<USkeletalMeshComponent*>& SkeletalMeshes, const bool bTickableWhenPaused)
{
	for (USkeletalMeshComponent* SkeletalMeshComp : SkeletalMeshes)
	{
		if (!IsValid(SkeletalMeshComp))
		{
			continue;
		}
		
		SkeletalMeshComp->ClothTickFunction.bTickEvenWhenPaused = bTickableWhenPaused;
	}
}

bool UClothTickExtensionBPLibrary::GetIsTickableWhenPausedCloth(const USkeletalMeshComponent* SkeletalMesh)
{
	if (!IsValid(SkeletalMesh))
	{
		return false;
	}
	
	return SkeletalMesh->ClothTickFunction.bTickEvenWhenPaused;
}
