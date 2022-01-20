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
	std::cout << "īŻ�α� �̸�: " << this->catalogName_ << std::endl << "�� " << count_ << "���� å�� �ֽ��ϴ�." << std::endl << std::endl;

	for (int i = 0; i < count_; i++) {
		std::cout << "���� ��: " << b_[i]->getTitle() << endl;
		std::cout << "����: " << b_[i]->getPersonptr()->getPersonName() << " " << b_[i]->getPersonptr()->getPersonRrNum() << endl;
		std::cout << "���� ��ȣ: " << b_[i]->getBookNum() << std::endl << std::endl;
	}
};