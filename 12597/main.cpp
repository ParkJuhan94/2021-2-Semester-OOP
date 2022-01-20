#include <iostream>
#include "book.h"
#include "person.h"
#include "catalog.h"

using namespace std;
int main() {
	Catalog* ct = new Catalog("교보카탈로그");
	Person* p1 = new Person("김작가", "980101-1000111");  // 이름 및 주민번호
	Person* p2 = new Person("배작가", "980102-1000222");

	Book* a1, * a2, * a3;
	a1 = new Book(p1, "111-22-3333", "생의 주변에서");   // 파라메터는 저자*  ISBN, 제목
	a2 = new Book(p1, "111-22-4444", "까라마조프가의 자매들");
	a3 = new Book(p2, "111-55-5555");    //  책 제목이 없으면 "제목 미정"으로 해준다.

	ct->addBook(a1);
	ct->addBook(a2);
	ct->addBook(a3);

	std::cout << "================================" << std::endl;
	ct->summary(); // 카탈로그명, 등록된 모든  도서 정보(도서명, ISBN, 저자정보) 출력
	std::cout << "================================" << std::endl;
	p1->summary(); // 각 개인의 정보(이름, 주민번호) 및 본인 저작 도서 정보를 출력한다.
	std::cout << "================================" << std::endl;
	p1->changeName("허균");
	ct->summary();
	std::cout << "================================" << std::endl;
}
