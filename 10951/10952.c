#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a = 1;
	int b = 1;	//for���� ó�� ������ ���ؼ� a, b�� 1�� �ʱ�ȭ

	for (int i = 0; (a + b) != 0; i++) {	//������ ������ ���� ����
		scanf("%d %d", &a, &b);
		if (!(a == 0 & b == 0)) {		//a�� b�� 0�϶��� ��� �ȵž���
			printf("%d\n", a + b);
		}
	}
}