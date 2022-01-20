#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int data[10000];
	int num;
	int x;

	scanf("%d %d", &num, &x);
	for (int i = 0; i < num; i++) {
		scanf("%d", &data[i]);
	}
	for (int j = 0; j < num; j++) {
		if (data[j] < x) {
			printf("%d ", data[j]);
		}
	}
}