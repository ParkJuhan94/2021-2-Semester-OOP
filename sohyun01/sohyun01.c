#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;	// �������� ����
	float r_data[205] = { 0 };
	float res[50005] = { 0 };
	float max = 0;
	int i, j;

	printf("�������� ������ �Է��Ͻÿ�:\n");
	scanf("%d", &n);

	printf("�����͸� ��� �Է� �� Enter�Ͻÿ�:\n");
	for (i = 0; i < n; i++) {
		scanf("%f", &r_data[i]);
	}
	
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (r_data[i] > r_data[j]) {
				res[n * i + j] = r_data[i] / r_data[j];
			}
			else {
				res[n * i + j] = r_data[j] / r_data[i];
			}
			
		}
	}

	printf("����� ������ �����ϴ�:\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < i; j++) {
			printf("\t");
		}
		for (j = i + 1; j < n; j++) {
			printf("%.3f,  ", res[n * i + j]);
		}
		
		printf("\n");
	}

	for (i = 0; i < n * n; i++ ) {
		if (res[i] > max) {
			max = res[i];
		}
	}
	printf("�ִ�: %.3f\n", max);
}