#include "petschool.h"
#include "pet.h"
#include <string>
#include <iostream>
using namespace std;

PetSchool::PetSchool(string schoolname) {
	this->schoolname_ = schoolname;
}

void PetSchool::registerPet(Pet* p) {
	
	this->p_[numPet] = p;
	this->p_[numPet]->setSchool(this);

	numPet++;
}

void PetSchool::showPets() {
	cout << this->schoolname_ << endl;
	for (int i = 0; i < numPet; i++) {
		p_[i]->self();
	}
	
}

void PetSchool::rename(string schoolname) {
	this->schoolname_ = schoolname;
}

void PetSchool::getFriendsName() {
	for (int i = 0; i < numPet; i++) {
		cout << " " << p_[i]->getName();
	}
}

string PetSchool::getSchoolName() {
	return this->schoolname_;
}