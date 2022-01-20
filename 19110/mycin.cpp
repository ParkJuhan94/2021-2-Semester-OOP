#include <iostream>
#include <string>

class MYCIN {
public:
	MYCIN& operator >> (int x) {
		scanf("%d", &x);
		x_ = x;
		return *this;
	}

	MYCIN& operator >> (double y) {
		scanf("%lf", &y);
		y_ = y;
		return *this;
	}

private:
	int x_;
	double y_;
};


int main() {
	MYCIN  cin;
	int x, double y;
	cin >> x >> y;
	std::cout << x << ", " << y << std::endl;
}