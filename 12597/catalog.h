#ifndef CATALOG_H
#define CATALOG_H

#include <string>
using namespace std;

class Book;
class Catalog
{
private:
	Book* b_[100];
	int bookNum_;
	string catalogName_;	
	int count_ = 0;

public:
	Catalog(string catalogName);

	string getBookNum(Book* b);
	string getCatalogName();

	void addBook(Book* b);	

	void summary();
};


#endif // !CATALOG_H


