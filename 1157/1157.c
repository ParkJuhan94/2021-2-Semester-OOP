#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char str[1000000];
	int alpha[26] = { 0 };
	int max = 0;
	int index_max;
	int duplic_max = -1;	//max의 중복 여부  0: 중복 없음   1이상: 중복

	scanf("%s", str);	// A: 65   a: 97

	for (int i = 0; str[i] != 0; i++) {
		for (char j = 'A'; j <= 'Z'; j++) {
			if (str[i] == j || str[i] == j + 32) {
				alpha[j - 'A']++;
			}
		}
	}

	for (int i = 0; i < 26; i++) {
		if (max < alpha[i]) {
			max = alpha[i];
			index_max = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (max == alpha[i]) {
			duplic_max++;		//-1로 초기화했기 때문에 max가 하나만 있을 시에 duplic_max = 0
		}
	}

	if (duplic_max == 0) {
		printf("%c\n", 'A' + index_max);
	}
	else {
		printf("?\n");
	}
}