#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printArr(int arr[], int cnt) {
	int i;

	for (i = 0; i < cnt; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
}

int main() {
	int arr[10];
	int i, tmp;

	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}

	printArr(arr, 10);

	for (int i = 0; i < 5; i++) {
		tmp = arr[i];
		arr[i] = arr[9 - i];
		arr[9 - i] = tmp;
	}

	printArr(arr, 10);
}