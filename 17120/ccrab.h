#pragma once
#include "canimal.h"
#include <string>

class Ccrab: public Canimal
{
public:	
	Ccrab(int x, int y);
	void goLeft();
	void goRight();
	void goForward();
	void goBackward();
	void hello();
};

