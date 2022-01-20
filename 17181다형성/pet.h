#pragma once
#include <string>
using namespace std;

class PetSchool;
class Pet
{
public:
	Pet(string name);
	virtual void introduce();
	void showFriends();
	void rename(string name);
	void setSchool(PetSchool* s);
	string getName();
	virtual void self();
protected:
	string name_;
	PetSchool* s_[10];
	int numSchool = 0;
	Pet* p_[200];
	int numPet_ = 0;
};

