#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int i, j;

int swap(char* a, char* b) {
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

//��������
void SelectionSort(char arr[], int size) {

    int minidx;

    for (i = 0; i < size - 1; i++)
    {
        minidx = i;

        for (j = i + 1; j < size; j++)
        {
            if (arr[j] > arr[minidx])   //���������� ��ȣ �ݴ�
            {
                minidx = j;
            }
            swap(&arr[i], &arr[minidx]);
        }
    }
}

int main() {    
    char arr[10];
    int size;

    scanf("%s", &arr);
    size = strlen(arr);
    
    SelectionSort(arr, size);

    printf("%s\n", arr);
}