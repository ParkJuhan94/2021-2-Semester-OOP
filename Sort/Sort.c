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
    printf("-------------선택정렬 완료------------\n");

    int arr2[] = { 5, 3, 6, 9, 1 };
    BubbleSort(arr2, 5);
    PrintArr(arr2, 5);
    printf("-------------삽입정렬 완료------------\n");
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

//오름차순으로 선택정렬하는 함수
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

//오름차순으로 삽입정렬하는 함수
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