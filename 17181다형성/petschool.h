#pragma once
#include <string>
using namespace std;

class Pet;
class PetSchool
{
public:
	PetSchool(string schoolname);
	void registerPet(Pet* p);
	void showPets();
	void rename(string schoolname);
	void getFriendsName();
	string getSchoolName();
protected:
	string schoolname_;
	Pet* p_[100];
	int numPet = 0;
};

