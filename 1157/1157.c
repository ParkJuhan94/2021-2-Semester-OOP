#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char str[1000000];
	int alpha[26] = { 0 };
	int max = 0;
	int index_max;
	int duplic_max = -1;	//max�� �ߺ� ����  0: �ߺ� ����   1�̻�: �ߺ�

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
			duplic_max++;		//-1�� �ʱ�ȭ�߱� ������ max�� �ϳ��� ���� �ÿ� duplic_max = 0
		}
	}

	if (duplic_max == 0) {
		printf("%c\n", 'A' + index_max);
	}
	else {
		printf("?\n");
	}
}