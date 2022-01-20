#include <iostream>
using namespace std; 

int main() {
	string buf, sum;

	while (cin >> buf) {
		sum = buf + sum;
	}

	cout << sum << endl;
}
