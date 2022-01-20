#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i, j;
int swap(int* a, int* b);
void PrintArr(int arr[], int size);
void SelectionSort(int arr[], int size);
void BubbleSort(int arr[], int size);


int main() {
    int arr1[] = { 5, 3, 6, 9, 1 };
    SelectionSort(arr1, 5);
    PrintArr(arr1, 5);
    printf("-------------�������� �Ϸ�------------\n");

    int arr2[] = { 5, 3, 6, 9, 1 };
    BubbleSort(arr2, 5);
    PrintArr(arr2, 5);
    printf("-------------�������� �Ϸ�------------\n");
}

int swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void PrintArr(int arr[], int size) {

    for (i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//������������ ���������ϴ� �Լ�
void SelectionSort(int arr[], int size) {

    int minidx;

    for (i = 0; i < size - 1; i++) 
    {
        minidx = i;
        
        for(j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minidx])
            {                
                minidx = j;
            }
            swap(&arr[i], &arr[minidx]);
        }
    }
}

//������������ ���������ϴ� �Լ�
void BubbleSort(int arr[], int size) {

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }        
    }
}