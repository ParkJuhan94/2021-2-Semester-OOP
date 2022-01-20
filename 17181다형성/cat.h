#pragma once
#include <string>
#include "pet.h"
using namespace std;

class Cat: public Pet
{
public:
	Cat(string name);
	void introduce() override;
	void self() override;
};

