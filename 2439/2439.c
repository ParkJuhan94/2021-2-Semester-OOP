#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {		//ù° for���� i�� ������ for������ ������ ��.
		for (int j = 1; j <= n - i; j++) {	//������ ù° for��. i ���� �������� ��.
			printf(" ");
		}
		for (int k = 1; k <= i; k++) {		//������ ��° for��. i ���� �������� ��.
			printf("*");
		}
		printf("\n");
	}
}