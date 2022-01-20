#include <iostream>
using namespace std;

class Integer {
private:
	int data_; 	
public:
	Integer() {
		this->data_ = 0;
	}

	Integer& addTo(int num) {
		this->data_ += num;

		return *this;
	}

	void print() {
		cout << data_ << endl;
	}
};


int main() {
	Integer i;  // 0���� �ʱ�ȭ
	i.addTo(3);  
	i.print(); // i�� 3�� �ȴ�.

	i.addTo(5);   
	i.print(); // i �� 8�� �ȴ�.

	i.addTo(10).addTo(10);   
	i.print(); // 28 �� �Ǿ�� �Ѵ�.
}