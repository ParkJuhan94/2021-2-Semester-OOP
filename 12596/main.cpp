#include <iostream>
#include "Account.h"
#include "Person.h"
#include "Bank.h"

using namespace std;
int main() {
	Bank* b = new Bank("명지은행");
	Person* p1 = new Person("홍길동", "980101-1000111");  // 이름 및 주민번호
	Person* p2 = new Person("배트맨", "980102-1000222");

	Account* a1, * a2, * a3;
	a1 = new Account(p1, 111221111, 10000);   // 파라메터는  Person *, 계좌번호, 초기 금액. 
	a2 = new Account(p1, 111222222, 20000);    //  계좌 번호는 정수로 한다.
	a3 = new Account(p2, 111223333);    // 금액이 없는 경우는 100원으로 만들어준다. (은행 돈으로)

	b->addAccount(a1);
	b->addAccount(a2);
	b->addAccount(a3);
	a1->deposit(1000); // 천원 입금
	a2->transferTo(10000, a3);  // a2에서 a3로 만원 이체

	std::cout << "================================" << std::endl;
	b->summary(); // 은행명, 등록된 모든  계좌 정보(계좌번호, 예금주 이름, 주민번호, 잔고) 출력
	std::cout << "================================" << std::endl;
	p1->summary(); // 각 개인의 정보(이름, 주민번호) 및 소유하고 있는 각 계좌의 정보(은행명, 계좌번호, 잔고) 를 출력한다.
	std::cout << "================================" << std::endl;
	p1->changeName("임꺽정");
	b->summary();
	std::cout << "================================" << std::endl;
}
