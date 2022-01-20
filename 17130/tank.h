#pragma once
#include "object.h"

class Tank: public Object
{
public:
	Tank(int x, int y);
	void hit() override;
	void show() override;
};

