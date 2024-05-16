#pragma once

#include "raylib.h"

struct Circle
{
	Vector2 position;
	float radius;
};

bool CheckCollisionCirclesC(const struct Circle *pC0, const struct Circle* pC1);
