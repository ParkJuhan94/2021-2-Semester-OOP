// 배열의 범위를 감시하여 넘어가면 예외 처리를 해주는 배열 클래스 GoodArray 를 만들어
// 실행되도록 하라.
#include <stdlib.h>
class GoodArray {
public:
	// 생성자에서 메모리를 생성
	GoodArray(int size): size_(size) {
		this->data_ = new int[size];
	}
	~GoodArray() {
		delete[] data_;
	}
	// 연산자 [] 를 override하면 된다.
	int & operator [] (int n) {
		if (n >= this->size_) {
			throw(1);
			return *data_;
		}
		return *(data_ + n);
	}
private:
	int size_;
	int* data_;   // 초기에 동적할당을 해준다.   
};

#include <iostream>
using namespace std;
int main() {
	GoodArray g(10);  // 10개 짜리 정수 배열을 만들어 준다.

	try {
		for (int i = 0; i < 10; i++) {
			g[i] = i;
		}
		for (int i = 0; i < 20; i++) {
			g[i] = i;
			cout << g[i] << endl;
		}
	}
	catch (int i) {
		cout << "배열 첨자 " << i << "은 범위를 벗어납니다." << endl;
	}
}
