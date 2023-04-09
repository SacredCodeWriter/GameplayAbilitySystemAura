// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AuraEnemy.h"
#include "Aura/Aura.h"

AAuraEnemy::AAuraEnemy()
{
	// Sets the collision for visibilty channel / used to allow enemy highlighting 
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

}

void AAuraEnemy::HighlightActor()
{
	// Draws highlights
	GetMesh()->SetRenderCustomDepth(true);
	GetMesh()->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
	Weapon->SetRenderCustomDepth(true);
	Weapon->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);

}

void AAuraEnemy::UnHighlightActor()
{
	// Removes highlights
	GetMesh()->SetRenderCustomDepth(false);
	Weapon->SetRenderCustomDepth(false);
}
