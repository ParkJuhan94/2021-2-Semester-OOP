#include <iostream>
#include "Account.h"
#include "Person.h"
using namespace std;
int main() {

	//다음과 같은 main 프로그램을 실행하도록 Person 클래스와 Account클래스를 작성하라.
	//Account는 계좌, Person은 사람을 나타내는 클래스이다.

	Person* p1 = new Person("홍길동", "960101-1000123");  // 이름 및 주민번호
	Person* p2 = new Person("배트맨", "960101-1000456");
	Account* a1, * a2;

	// 생성자에서 사람과 계좌를 서로 연결해 주어야 한다.
	a1 = new Account(p1, "111-22-3333"); // 마지막 파라메터는 계좌번호
	a2 = new Account(p2, "111-22-4444");
	a1->Deposit(10000);  // 만원 저금
	a2->Deposit(5000);  // 5천원 저금
	a1->TransferTo(a2, 6000);  // a1에서 a2로 송금
	a1->Report();  // 계좌번호, 주인의 이름, 주인의 주민번호, 잔액을 출력
	a2->Report();

	p1->Report(); // 이 사람의 이름, 주민번호, 계좌정보(계좌 번호, 잔액)

	//* 사람에게는 최대 10개의 계좌를 가질 수 있게 하면 추가 5점. 
	//( 이 경우 main에 아래와 같은 추가적인 테스트 코드를 넣어야 한다.)	 
	Account* a3 = new Account(p1, "111-22-5555");
	a3->Deposit(9999);
	p1->Report();
}
