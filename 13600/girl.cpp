#include "girl.h"
#include "boy.h"
CGirl::CGirl(string n) :name_(n), bf_(0) {}

CGirl::~CGirl() {
	bf_->SetGF(0);
}
void CGirl::SetBF(CBoy* b) {
	bf_ = b;
}
void CGirl::Hello() {
	if (bf_ == 0) {
		cout << "���� ����. " << name_ << "�Դϴ�. ����ģ���� �����ϴ�." << endl;
	}
	else {
		cout << "���̸��� " << name_;
		cout << ", ���� ģ���� " << bf_->Getname() << endl;
	}	
}
string CGirl::Getname() {
	return name_;
}



