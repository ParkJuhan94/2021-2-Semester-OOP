#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum_hexagon(int _n) {	//������ �ִ밪�� ��ȯ
	int sum = 1;

	for (int i = 0; i <= _n; i++ ) {
		sum += 6 * i;
	}
	return sum;
}


int main() {
	int a;
	int i;	//sum_hexagon�� �Է��� ��. ������ �� ���� ���� ����

	scanf("%d", &a);

	for (i = 1; !(sum_hexagon(i - 2) <= a && a <= sum_hexagon(i - 1)); i++) {
		//�������
	}

	printf("%d", i);
}