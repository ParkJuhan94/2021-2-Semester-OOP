#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    char* answer = (char*)malloc(sizeof(char) * 3 + 1);
    int days_month[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int days_total = 0;     //1월1일부터 a월 b일 까지의 날 수
    int i;

    for (i = 0; i < a - 1; i++) {   //1월1일부터 a월의 1일까지 날 수 
        days_total += days_month[i];
    }
    days_total += (b - 1);  //a월 1일부터 a월 b일까지의 날 수
    

    if (days_total % 7 == 0) {
        answer = "FRI";
    }
    else if (days_total % 7 == 1) {
        answer= "SAT";
    }
    else if (days_total % 7 == 2) {
        answer = "SUN";
    }
    else if (days_total % 7 == 3) {
        answer = "MON";
    }
    else if (days_total % 7 == 4) {
        answer = "TUE";
    }
    else if (days_total % 7 == 5) {
        answer = "WED";
    }
    else if (days_total % 7 == 6) {
        answer = "THU";
    }
    return answer;
}

int main() {
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%s\n", solution(a, b));
}