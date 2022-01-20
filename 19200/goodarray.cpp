// �迭�� ������ �����Ͽ� �Ѿ�� ���� ó���� ���ִ� �迭 Ŭ���� GoodArray �� �����
// ����ǵ��� �϶�.
#include <stdlib.h>
class GoodArray {
public:
	// �����ڿ��� �޸𸮸� ����
	GoodArray(int size): size_(size) {
		this->data_ = new int[size];
	}
	~GoodArray() {
		delete[] data_;
	}
	// ������ [] �� override�ϸ� �ȴ�.
	int & operator [] (int n) {
		if (n >= this->size_) {
			throw(1);
			return *data_;
		}
		return *(data_ + n);
	}
private:
	int size_;
	int* data_;   // �ʱ⿡ �����Ҵ��� ���ش�.   
};

#include <iostream>
using namespace std;
int main() {
	GoodArray g(10);  // 10�� ¥�� ���� �迭�� ����� �ش�.

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
		cout << "�迭 ÷�� " << i << "�� ������ ����ϴ�." << endl;
	}
}
