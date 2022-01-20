#pragma once

class Account {
	// 공개 메소드
public:
	Account();  // 기본 생성자.
	void deposit(int m);  // 입금 메소드
	virtual bool withdraw(int m);  // 출금 메소드. 실패하면 0을 return한다.
	int getBalance();
	void setBalance(int m);

	// 멤버 변수 및 비공개 함수
private:
	int balance_;  // 잔액
};

