#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num;
	int tmp;
	int max = -1000000;		//max�� min�� �ִ�,�ּҰ����� �ٷ� ��ü�ϱ� ���� ���Ѱ����� �ʱ�ȭ�Ѵ�.
	int min = 1000000;

	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &tmp);
		if (tmp > max) {
			max = tmp;
		}
		if (tmp < min) {
			min = tmp;
		}
	}
	printf("%d %d", min, max);

}