#include "dog.h"
#include "petschool.h"
#include <string>
#include <iostream>
using namespace std;

Dog::Dog(string name):Pet(name) {
	p_[numPet_] = this;
	numPet_++;
}

void Dog::introduce() {
	cout << "¸Û¸ÛÀÌ " << this->name_ << " ÀÔ´Ï´Ù.";
	for (int i = 0; i < numSchool; i++) {
		cout << this->s_[i]->getSchoolName();
	}
	cout << "¿¡ ´Ù´Õ´Ï´Ù." << endl;
}

void Dog::self() {
	cout << "³ª´Â ¸Û¸ÛÀÌ ÀÌ¸§Àº " << this->name_ << endl;
}
