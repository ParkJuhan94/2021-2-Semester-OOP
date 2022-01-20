#pragma once
#include "canimal.h"
#include <string>

class Cfrog : public Canimal
{
public:
	Cfrog(int x, int y);
	void goLeft();
	void goRight();
	void goForward();
	void goBackward();
	void hello();
};

