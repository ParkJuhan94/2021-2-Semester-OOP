#include <string>
#include "book.h"
#include "person.h"
#include "catalog.h"

Book::Book(Person* p, string bookNum, string title)
{
	this->bookNum_ = bookNum;
	this->p_ = p;
	this->title_ = title;
	p->setBook(this);
};

Book::Book(Person* p, string bookNum)
{
	this->bookNum_ = bookNum;
	this->p_ = p;
	this->title_ = "제목 미정";
	p->setBook(this);
};

std::string Book::getBookNum() {
	return this->bookNum_;
};

Person* Book::getPersonptr() {
	return this->p_;
}

string Book::getTitle() {
	return this->title_;
}
