#pragma once
#include "SpriteComponent.h"


SpriteComponent::~SpriteComponent()
{
}

void SpriteComponent::Load(char* filename)
{
	*image = LoadImage(filename);
	*texture = LoadTextureFromImage(*image);

	defaultWidth = texture->width;
	defaultHeight = texture->height;
}

