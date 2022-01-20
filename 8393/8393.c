#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int n;
    int sum = 0;    //반드시 0으로 초기화

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("%d\n", sum);
}