#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a;
	int b;
	int num_test;

	scanf("%d", &num_test);	//�׽�Ʈ ���̽��� ���� �̸� �Է¹ޱ�

	for (int i = 0; i < num_test; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
}