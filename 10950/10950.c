#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a[100] = { 0 };
	int b[100] = { 0 };
	int num_test;

	scanf("%d", &num_test);	//�׽�Ʈ ���̽��� ���� �̸� �Է¹ޱ�

	for (int i = 0; i < num_test; i++) {
		scanf("%d %d", &a[i], &b[i]);
		printf("%d\n", a[i] + b[i]);
	}
}