#include <iostream>
using namespace std;
class Mr_Sohn {
private:
	int ID_;   // 각 instance의 번호.  
	static int myNum_; 			// 클래스 변수를 추가한다.
public:
	Mr_Sohn() {
		//  여기서 번호를 정해준다.		
		ID_ = myNum_;
		myNum_++;
	}
	void show() { 
		cout << "내 번호는: " << ID_ << "입니다.\n"; }
};

// 클래스 변수는 여기서 초기화.
int Mr_Sohn::myNum_ = 1;

int main() {
	Mr_Sohn* s1, * s2, * s3;

	s1 = new Mr_Sohn;
	s2 = new Mr_Sohn;
	s3 = new Mr_Sohn;

	s2->show();  // 2번, 1번, 3번이 나오게 한다.
	s1->show();
	s3->show();
}
