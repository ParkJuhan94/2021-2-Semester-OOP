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
		cout << "나는 여자. " << name_ << "입니다. 남자친구는 없습니다." << endl;
	}
	else {
		cout << "내이름은 " << name_;
		cout << ", 남자 친구는 " << bf_->Getname() << endl;
	}	
}
string CGirl::Getname() {
	return name_;
}



