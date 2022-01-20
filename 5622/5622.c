#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char arr[16];
	int sec[26] = { 3, 3 ,3 ,4 ,4 ,4 ,5 ,5 ,5 ,6 ,6 ,6 ,
				7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
	int sum = 0;

	scanf("%s", arr);
	for (int i = 0; arr[i] != 0; i++) {
		sum += sec[arr[i] - 'A'];
	}

	printf("%d", sum);
}