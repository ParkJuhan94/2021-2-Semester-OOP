#pragma once
#include <string>

class Canimal
{
public:
	//Canimal();
	Canimal(int x, int y);
	virtual void goLeft();
	virtual void goRight();
	virtual void goForward();
	virtual void goBackward();
	virtual int getPosX();
	virtual int getPosY();
	virtual void hello();
protected:
	int x_, y_;	
};

