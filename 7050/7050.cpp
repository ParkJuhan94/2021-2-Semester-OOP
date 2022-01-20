#include <iostream>
using namespace std;
int main() {
    int score[5] = { 11,22,33,44,55 };
    // 범위에 기반한 새로운 형태의 for 를 이용하여 score를 전부 출력한다. 한 줄에 하나씩. 
    for (auto i : score) {
        cout << i << endl;
    }

    return 0;
}
