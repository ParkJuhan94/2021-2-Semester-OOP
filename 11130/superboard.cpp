#include <iostream>
using namespace std;
class Mr_Sohn {
private:
	int ID_;   // �� instance�� ��ȣ.  
	static int myNum_; 			// Ŭ���� ������ �߰��Ѵ�.
public:
	Mr_Sohn() {
		//  ���⼭ ��ȣ�� �����ش�.		
		ID_ = myNum_;
		myNum_++;
	}
	void show() { 
		cout << "�� ��ȣ��: " << ID_ << "�Դϴ�.\n"; }
};

// Ŭ���� ������ ���⼭ �ʱ�ȭ.
int Mr_Sohn::myNum_ = 1;

int main() {
	Mr_Sohn* s1, * s2, * s3;

	s1 = new Mr_Sohn;
	s2 = new Mr_Sohn;
	s3 = new Mr_Sohn;

	s2->show();  // 2��, 1��, 3���� ������ �Ѵ�.
	s1->show();
	s3->show();
}
