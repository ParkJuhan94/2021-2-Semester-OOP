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
		farray(i) = i * 2;   // �迭 array�� ���� �����ȴ�.
	}

	for (int i = 0; i < 6; i++) {
		// �������� i=5 �� ���� ���ܰ� �߻��ؾ��Ѵ�.	
		try {
			std::cout << farray(i) << std::endl;
		}
		catch (int error) {
			std::cout << "�迭 ���� �ʰ�" << std::endl;
		}
		
	}
}