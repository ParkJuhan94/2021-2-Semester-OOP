#include "boy.h"
#include "girl.h"
CBoy::CBoy(string n) :name_(n) {}

CBoy::~CBoy() {
	gf_->SetBF(0);
}

void CBoy::SetGF(CGirl* g) {
	gf_ = g;
}
void CBoy::Hello() {
	if (gf_ == 0) {
		cout << "���� ����. " << name_ << "�Դϴ�. ����ģ���� �����ϴ�." << endl;
	}
	else {
		cout << "���̸��� " << name_;
		cout << ", ���� ģ���� " << gf_->Getname() << endl;
	}	
}
string CBoy::Getname() {
	return name_;
}
