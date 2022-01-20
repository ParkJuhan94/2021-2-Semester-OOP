#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int h;
	int m;
	int convert_h;	//변환된 시
	int convert_m;	//변환된 분

	scanf("%d %d", &h, &m);	//변환할 h시 m분 입력받기

	if (m >= 45) {
		convert_h = h;
		convert_m = m - 45;
	}
	else {
		convert_h = (h - 1 + 24) % 24;	//0시 -> 23시 변환
		convert_m = m - 45 + 60;
	}
	printf("%d %d", convert_h, convert_m);
}