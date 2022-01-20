#include <iostream>
#include "Bank.h"
#include "Account.h"
#include "Person.h"

//using namespace std;

int main() {
	Bank* theBank = new Bank("명지은행");
	Account* a, * b;
	Person* p1, * p2;

	p1 = new Person("홍길동", "950101-1234567");
	p2 = new Person("김길동", "951212-1234568");

	a = new Account("11112222", p1, 10000); // 홍길동의 계좌 11112222, 10000원
	b = new Account("11113333", p2, 20000);

	theBank->addAccount(a);   // 최대 100개의 Account를 저장할 수 있도록 포인터 배열을 사용한다.
	theBank->addAccount(b);

	theBank->deposit("11112222", 3000);  // 계좌 번호를 검색해서 입금해야한다.
	theBank->withdraw("11112222", 2000);
	theBank->transfer("11112222", "11113333", 1000);
	// 11112222계좌에서 11113333계좌로 1000원 이체

	theBank->showEverything();  // 은행에 있는 모든 계좌에 대한 현재 정보(계좌 주인 정보, 잔액)를 출력.
}