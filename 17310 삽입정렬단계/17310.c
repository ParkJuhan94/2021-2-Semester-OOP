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
    int size = 0;           // ���� ����ִ� ����
    int next;               // �̹��� ���� ��
    int insert_pos;         // next �� �� ��ġ

    printf("ó�� ����: ( )\n");
    while (scanf("%d", &next) == 1) {

        insert_pos = findPos(data, size, next);
        insert(data, size, insert_pos, next);
        size++;

        printf("%d ���� ��:  ( ", next);
        for (i = 0; i < size; i++) {
            printf("%d ", data[i]);
        }
        printf(")\n");
    }    
}