#pragma once

class Account {
	// ���� �޼ҵ�
public:
	Account();  // �⺻ ������.
	void deposit(int m);  // �Ա� �޼ҵ�
	virtual bool withdraw(int m);  // ��� �޼ҵ�. �����ϸ� 0�� return�Ѵ�.
	int getBalance();
	void setBalance(int m);

	// ��� ���� �� ����� �Լ�
private:
	int balance_;  // �ܾ�
};

