#include <iostream>
using namespace std;
void rswap(int& a, int& b) {
    int tmp;

    tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int one, two;

    cin >> one >> two;
    cout << one << " " << two << endl;

    rswap(one, two);
    cout << one << " " << two << endl;

    return 0;
}