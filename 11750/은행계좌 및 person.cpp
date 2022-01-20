#include <iostream>
using namespace std;

class Person {
private:
	string name_;
	string rr_num_;
public:
	Person(string name, string rr_num) {
		name_ = name;
		rr_num_ = rr_num;
	}

	string getName() {
		return name_;
	}
};

class Account {
private:
	Person* p_;
	int balance_deposit_ = 0;
public:
	Account(Person* p, int balance_deposit) {
		p_ = p;
		balance_deposit_ = balance_deposit;
	}

	void Deposit(int num) {
		balance_deposit_ += num;
	}

	void TransferTo(Account* acc, int num) {
		this->WithDraw(num);
		acc->Deposit(num);
	}

	void WithDraw(int num) {
		balance_deposit_ -= num;
	}

	void PrintBalance() {
		cout << p_->getName() << "님의 잔액 : " << balance_deposit_ << "원" << endl;
	}
};

int main() {
	Person* p1, * p2;
	Account* acc1, * acc2;

	p1 = new Person("김길동", "930101-1234567");
	p2 = new Person("홍길동", "921212-1234678");

	acc1 = new Account(p1, 10000); //예금주, 최초 잔고 

	acc2 = new Account(p2, 0);

	acc1->Deposit(10000);  // 1만원 입금
	acc1->TransferTo(acc2, 5000); // acc1에서 acc2로 5000원 계좌 이체
	acc1->WithDraw(6000);    //  출금 메소드
	acc1->TransferTo(acc2, 6000); //  
	acc2->WithDraw(1000);  //

	acc1->PrintBalance();   // 예금주 이름과 잔액을 출력한다.
	acc2->PrintBalance();

}