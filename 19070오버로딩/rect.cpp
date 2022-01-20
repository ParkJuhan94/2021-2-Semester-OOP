#include <iostream>


class Rect {
public:
	// ������
	Rect(int w, int h): width_(w), height_(h) {
		//
	}
	// ������
	int operator *() {
		return this->height_ * this->width_;
	}

	void operator ++ () {
		this->width_++;
	}

	void operator ++ (int n) {
		this->height_++;
	}
private:
	int width_, height_;
};

using namespace std;
int main() {
	Rect r(2, 8); // width 2, height 8
	r++;  // ���̸� ����
	cout << *r << endl;   // ������ ���
	++r;  // �ʺ� ����
	cout << *r << endl;
}
