#include "Dog.h"
#include "Dogschool.h"
#include <iostream>
#include <string>
using namespace std;

Dog::Dog(string name) {
	this->name_ = name;
}

Dog* Dog::getPtr() {
	return this;
}

void Dog::SetSchool(Dogschool* d) {
	this->d_ = d;
}

void Dog::DropSchool() {
	d_->DropDog(this);
}

void Dog::SetName(string name) {
	this->name_ = name;
}

void Dog::Introduce() {
	cout << "¸Û¸Û, ³ª´Â " << this->name_ << "ÀÔ´Ï´Ù. ³ª´Â " << d_->getSchoolName() << "¿¡ ´Ù´Õ´Ï´Ù." << endl;
}
