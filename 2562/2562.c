#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int data[9] = { 0 };
	int max = 0;
	int index;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &data[i]);
		if (data[i] > max) {
			max = data[i];
			index = i + 1;
		}		
	}
	printf("%d\n", max);
	printf("%d\n", index);
}