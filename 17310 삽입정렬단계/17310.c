#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int i;

int findPos(int data[], int size, int next) {
    int res = 0;

    for (i = 0; i < size; i++) {

        if (data[i] > next) {
            break;
        }
        res++;
    }

    return res;
}

void insert(int data[], int size, int insert_pos, int next) {
    for (i = size - 1; i >= insert_pos; i--) {
        data[i + 1] = data[i];
    }
    data[insert_pos] = next;

    size++;
}

int main() {
    int data[100];
    int size = 0;           // 현재 들어있는 개수
    int next;               // 이번에 넣을 수
    int insert_pos;         // next 가 들어갈 위치

    printf("처음 상태: ( )\n");
    while (scanf("%d", &next) == 1) {

        insert_pos = findPos(data, size, next);
        insert(data, size, insert_pos, next);
        size++;

        printf("%d 삽입 후:  ( ", next);
        for (i = 0; i < size; i++) {
            printf("%d ", data[i]);
        }
        printf(")\n");
    }    
}