#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Catalog;
class Book;
class Person
{
private:
	string name_, rrNum_;
	Book* b_[10];
	int cnt_ = 0;
	Catalog* c_;

public:
	Person(string name, string rrNum);

	string getPersonName();
	string getPersonRrNum();

	void setBook(Book* b);
	void changeName(string name);
	void summary();
};

#endif // !PERSON_H
