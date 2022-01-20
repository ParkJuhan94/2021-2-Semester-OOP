#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num;
	int tmp;
	int max = -1000000;		//max와 min을 최대,최소값으로 바로 교체하기 위해 극한값으로 초기화한다.
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