#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int test, k, n;		//k층(행) n호(열)
	int num_person[15][14] = { 0 };

	scanf("%d", &test);

	for (int i = 0; i <= 13; i++) {		//0층 초기화
		num_person[14][i] = i + 1;
	}

	for (int i = 0; i <= 14; i++) {		//1호 2호 초기화
		num_person[i][0] = 1;
		num_person[i][1] = 16 - i;
	}

	for (int a = 13; a >= 0; a--) {		// 나머지 초기화
		for (int b = 2; b <= 13; b++) {
			for (int c = 0; c <= b; c++) {
				num_person[a][b] += num_person[a + 1][c];
			}
		}
	}

	for (int i = 0; i < test; i++) {	
		scanf("%d %d", &k, &n);

		printf("%d\n", num_person[14 - k][n - 1]);
	}
	
}