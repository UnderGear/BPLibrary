// Copyright Epic Games, Inc. All Rights Reserved.

#include "BPLibraryBPLibrary.h"
#include "BPLibrary.h"


FGameplayTag UBPLibraryBPLibrary::RequestGameplayTag(FString TagName)
{
	return UGameplayTagsManager::Get().RequestGameplayTag(FName{ *TagName });
}

