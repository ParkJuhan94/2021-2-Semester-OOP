#include <string>
#include <iostream>
#include "book.h"
#include "person.h"
#include "catalog.h"

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

void Person::setBook(Book* b) {
	this->b_[cnt_] = b;

	cnt_++;
}

void Person::changeName(string name) {
	this->name_ = name;
}

void Person::summary() {
	std::cout << this->name_ << " " << this->rrNum_ << std::endl;

	for (int i = 0; i < cnt_; i++) {		
		std::cout << "도서 명: " << this->b_[i]->getTitle() << std::endl;
		std::cout << "저자: " << this->b_[i]->getPersonptr()->getPersonName() << std::endl;
		std::cout << "도서 번호: " << this->b_[i]->getBookNum() << std::endl << std::endl;
	}
}