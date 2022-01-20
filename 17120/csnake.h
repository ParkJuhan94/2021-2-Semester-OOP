#pragma once
#include "canimal.h"
#include <string>

class Csnake : public Canimal
{
public:
	Csnake(int x, int y);
	void goLeft();
	void goRight();
	void goForward();
	void goBackward();
	void hello();
};

