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
	Integer i;  // 0으로 초기화
	i.addTo(3);  
	i.print(); // i는 3이 된다.

	i.addTo(5);   
	i.print(); // i 는 8이 된다.

	i.addTo(10).addTo(10);   
	i.print(); // 28 이 되어야 한다.
}