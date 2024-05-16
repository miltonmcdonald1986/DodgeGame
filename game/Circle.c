#include "Circle.h"

bool CheckCollisionCirclesC(const struct Circle* pC0, const struct Circle* pC1)
{
	if (!pC0 || !pC1)
		return false;

	return CheckCollisionCircles(pC0->position, pC0->radius, pC1->position, pC1->radius);
}
