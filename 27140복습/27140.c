#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pswap(int* one, int* two) {
    int tmp;

    tmp = *one;
    *one = *two;
    *two = tmp;
    // �ΰ��� ������ �ٲ۴�.
}

int main() {
    int first, second;

    scanf("%d%d", &first, &second);
    printf("pswap ȣ�� ��: %d %d\n", first, second);
    pswap(&first, &second); // �� ���� �ణ ������ �ʿ��ϴ�.
    printf("pswap ȣ�� ��: %d %d\n", first, second);
    return 0;
}
