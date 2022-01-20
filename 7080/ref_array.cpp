#include <iostream>
//using namespace std;
int array[5];

int& farray(int& i) {
	if (i > 4) {
		throw(1);
	}
	return array[i];
}

int main() {
	for (int i = 0; i < 5; i++) {
		farray(i) = i * 2;   // 배열 array의 값이 수정된다.
	}

	for (int i = 0; i < 6; i++) {
		// 마지막에 i=5 인 경우는 예외가 발생해야한다.	
		try {
			std::cout << farray(i) << std::endl;
		}
		catch (int error) {
			std::cout << "배열 범위 초과" << std::endl;
		}
		
	}
}