#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int n;
    int sum = 0;    //�ݵ�� 0���� �ʱ�ȭ

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("%d\n", sum);
}