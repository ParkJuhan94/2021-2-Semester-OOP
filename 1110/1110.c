#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a;
	int tmp;	//a�� �ٸ� ������ �ʱ�ȭ
	int cnt = 0;	//����ŬȽ��
	
	scanf("%d", &a);
	tmp = a;	//������ a���� ����

	do{
		if (a < 10) {
			a = a * 10 + a;
			cnt++;
		}
		else {
			a = (a % 10) * 10 + (((a / 10) + a % 10) % 10);	//�߿� ����
			cnt++;
		}
	} while (tmp != a);
	printf("%d", cnt);
}