#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <String.h>
int main() {
	int arr[10][10];
	int c, r;
	int sum = 0;
		
	scanf("%d %d", &c, &r);
	
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < r; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < r; j++) {
			sum += arr[i][j];
		}
		printf("%d\n", sum);
		sum = 0;
	}
	
}