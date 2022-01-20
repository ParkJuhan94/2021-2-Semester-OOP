#include <string>
#include "Account.h"
#include "Person.h"
#include "Bank.h"

Person::Person(std::string name, std::string rrNum) {
	this->name_ = name;
	this->rrNum_ = rrNum;
}

std::string Person::getPersonName() {
	return this->name_;
}

std::string Person::getPersonRrNum() {
	return this->rrNum_;
}