#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int sum = 1;
	int cnt;

	for (cnt = 0; 1; cnt++) {
		sum += cnt;

		if (sum > 100) {
			return 0;
		}
		printf("%d, ", sum);
		
	}
	printf("\n");
}