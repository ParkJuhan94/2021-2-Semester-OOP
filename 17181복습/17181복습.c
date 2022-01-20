#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int score[100];
	int stuNum = 0;
	int i = 0;
	int n;

	while ((n = scanf("%d", &score[i])) == 1 ) {
		i++;
		stuNum++;
	}

	printf("%d¸í\n", stuNum);

	for (i = stuNum - 1; i >= 0; i--) {
		printf("%d ", score[i]);
	}
}