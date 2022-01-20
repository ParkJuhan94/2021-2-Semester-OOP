#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int i;

int sum_array(int count, int data[]) {
    int sum = 0;

    for (i = 0; i < count; i++) {
        sum += data[i];
    }

    return sum;
}

int main() {
    int math[5] = { 1,5,6,7,8 };
    int english[4] = { 50, 60, 70, 80 };

    int sum = sum_array(5, math);
    printf("%d\n", sum);

    sum = sum_array(4, english);
    printf("%d\n", sum);
}