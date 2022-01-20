#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int year;
    scanf("%d", &year);
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("1");    //À±³â
            }
            else {
                printf("0");    //Æò³â
            }
        }
        else {
            printf("1");    //À±³â
        }
    }
    else {
        printf("0");    //Æò³â
    }
}