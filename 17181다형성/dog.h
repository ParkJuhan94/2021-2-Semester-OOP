#pragma once
#include <string>
#include "pet.h"
using namespace std;

class Dog: public Pet
{
public:
	Dog(string name);
	void introduce() override;
	void self() override;
};

