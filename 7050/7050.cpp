#include <iostream>
using namespace std;
int main() {
    int score[5] = { 11,22,33,44,55 };
    // ������ ����� ���ο� ������ for �� �̿��Ͽ� score�� ���� ����Ѵ�. �� �ٿ� �ϳ���. 
    for (auto i : score) {
        cout << i << endl;
    }

    return 0;
}
