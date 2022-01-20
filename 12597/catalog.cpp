#include <iostream>
#include <string>
#include "catalog.h"
#include "book.h"
#include "person.h"

//using namespace std;

Catalog::Catalog(std::string catalogName) {
	this->catalogName_ = catalogName;
};

void Catalog::addBook(Book* b) {
	this->b_[count_] = b;
	count_++;
};

string Catalog::getBookNum(Book* b) {
	return b->getBookNum();
};

std::string Catalog::getCatalogName() {
	return this->catalogName_;
}

void Catalog::summary() {
	std::cout << "카탈로그 이름: " << this->catalogName_ << std::endl << "총 " << count_ << "개의 책이 있습니다." << std::endl << std::endl;

	for (int i = 0; i < count_; i++) {
		std::cout << "도서 명: " << b_[i]->getTitle() << endl;
		std::cout << "저자: " << b_[i]->getPersonptr()->getPersonName() << " " << b_[i]->getPersonptr()->getPersonRrNum() << endl;
		std::cout << "도서 번호: " << b_[i]->getBookNum() << std::endl << std::endl;
	}
};