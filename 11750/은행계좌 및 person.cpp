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
		cout << p_->getName() << "���� �ܾ� : " << balance_deposit_ << "��" << endl;
	}
};

int main() {
	Person* p1, * p2;
	Account* acc1, * acc2;

	p1 = new Person("��浿", "930101-1234567");
	p2 = new Person("ȫ�浿", "921212-1234678");

	acc1 = new Account(p1, 10000); //������, ���� �ܰ� 

	acc2 = new Account(p2, 0);

	acc1->Deposit(10000);  // 1���� �Ա�
	acc1->TransferTo(acc2, 5000); // acc1���� acc2�� 5000�� ���� ��ü
	acc1->WithDraw(6000);    //  ��� �޼ҵ�
	acc1->TransferTo(acc2, 6000); //  
	acc2->WithDraw(1000);  //

	acc1->PrintBalance();   // ������ �̸��� �ܾ��� ����Ѵ�.
	acc2->PrintBalance();

}