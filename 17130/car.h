#pragma once
#include "object.h"

class Car: public Object
{
public:
	Car(int x, int y);
	void hit() override;
	void show() override;
};

