#include <iostream>


class Rect {
public:
	// 생성자
	Rect(int w, int h): width_(w), height_(h) {
		//
	}
	// 연산자
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
	r++;  // 높이를 증가
	cout << *r << endl;   // 면적을 출력
	++r;  // 너비를 증가
	cout << *r << endl;
}
