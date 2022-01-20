#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int n) {
    int cnt = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            cnt++;
        }
    }

    if (cnt > 1) {
        return 0;
    }
    else {
        return 1;
    }

}



int main() {
    int num;
    scanf("%d", &num);

    if (isPrime(num) == 1) {
        printf("¼Ò¼ö\n");
    }

    else {
        printf("¾Æ´Ô\n");
    }
}