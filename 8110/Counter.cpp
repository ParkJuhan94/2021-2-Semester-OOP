#include <iostream>
using namespace std;

class Counter {
private:
	int res_ = 0;
public:
	void tick() {
		res_++;
	}

	void reset() {
		res_ = 0;
	}

	void display() {
		cout << res_ << endl;
	}
};

int main() {
	Counter Cnt;
	int n;

	while (cin >> n) 
	{
		if (n == 0) {
			Cnt.reset();
			Cnt.display();
		}
		else if (n == 1) {
			Cnt.tick();
			Cnt.display();
		}
		else {
			cout << "END" << endl;
			return 0;
		}
	}		

	return 0;
}