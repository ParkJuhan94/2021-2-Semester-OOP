#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int h;
	int m;
	int convert_h;	//��ȯ�� ��
	int convert_m;	//��ȯ�� ��

	scanf("%d %d", &h, &m);	//��ȯ�� h�� m�� �Է¹ޱ�

	if (m >= 45) {
		convert_h = h;
		convert_m = m - 45;
	}
	else {
		convert_h = (h - 1 + 24) % 24;	//0�� -> 23�� ��ȯ
		convert_m = m - 45 + 60;
	}
	printf("%d %d", convert_h, convert_m);
}