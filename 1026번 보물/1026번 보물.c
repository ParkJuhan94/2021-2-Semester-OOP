#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int i, j;

int swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void SelectionSortAsc(int arr[], int size) {

	int minidx;

	for (i = 0; i < size - 1; i++)
	{
		minidx = i;

		for (j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[minidx])
			{
				minidx = j;
			}
			swap(&arr[i], &arr[minidx]);
		}
	}
}

void SelectionSortDesc(int arr[], int size) {

	int minidx;

	for (i = 0; i < size - 1; i++)
	{
		minidx = i;

		for (j = i + 1; j < size; j++)
		{
			if (arr[j] > arr[minidx])
			{
				minidx = j;
			}
			swap(&arr[i], &arr[minidx]);
		}
	}
}

int main() {	
	int n, min = -1 ,sum = 0;

	scanf("%d", &n);
	int* a = (int*)malloc(sizeof(int) * n);
	int* b = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++) {
		scanf("%d", &b[i]);
	}

	// b는 오름차순 정렬하고, a는 내림차순 정렬
	SelectionSortAsc(b, n);
	SelectionSortDesc(a, n);

	////////////////	
	printf("--------test-------\n");
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	printf("\n");
	for (i = 0; i < n; i++) {
		printf("%d ", b[i]);
	}
	printf("\n--------------------\n");
	////////////////////


	for (i = 0; i < n; i++) {
		sum += a[i] * b[i];
	}

	printf("%d", sum);
}