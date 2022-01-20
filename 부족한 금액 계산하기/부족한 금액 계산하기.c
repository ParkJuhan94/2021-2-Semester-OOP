#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long answer = -1;
    long long sum = 0;
    int i;

    for (i = 1; i <= count; i++) {
        sum += price * i;
    }

    answer = sum - money >= 0 ? sum - money : 0;

    return answer;
}

int main() {
    printf("%d\n", solution(3, 20, 3));
}