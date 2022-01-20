#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Person;
class Book
{
private:
	string bookNum_, title_;	
	Person* p_;

public:
	Book(Person* p, string bookNum, string title);
	Book(Person* p, string title);

	string getBookNum();
	string getTitle();
	Person* getPersonptr();
};

#endif // !BOOK_H

