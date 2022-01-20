#include "pet.h"
#include "petschool.h"
#include <string>
#include <iostream>
using namespace std;

Pet::Pet(string name) {
	this->name_ = name;
}

void Pet::introduce() {
	//
}

void Pet::showFriends() {	
	for (int i = 0; i < numSchool; i++) {
		cout << this->s_[i]->getSchoolName() << " 친구들은";
		this->s_[i]->getFriendsName();
		cout << endl;
	}
	
}

void Pet::rename(string name) {
	this->name_ = name;
}

void Pet::setSchool(PetSchool* s) {
	this->s_[numSchool++] = s;
}

string Pet::getName() {
	return this->name_;
}

void Pet::self() {
	//
}