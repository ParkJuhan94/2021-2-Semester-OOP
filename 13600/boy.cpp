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
		cout << "나는 남자. " << name_ << "입니다. 여자친구는 없습니다." << endl;
	}
	else {
		cout << "내이름은 " << name_;
		cout << ", 여자 친구는 " << gf_->Getname() << endl;
	}	
}
string CBoy::Getname() {
	return name_;
}
