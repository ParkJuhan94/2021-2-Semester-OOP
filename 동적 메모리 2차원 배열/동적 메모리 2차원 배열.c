#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, x, y;
	int** pptr = (int**)malloc(sizeof(int*) * 8);	//8���� �������� �����͹迭 �޸��Ҵ�

	for (i = 0; i < 8; i++) 
	{
		*(pptr + i) = (int*)malloc(sizeof(int) * 6);	//6���� �����͹迭
	}

	for (y = 0; y < 8; y++)		//8 * 6���� �迭 ���� �ʱ�ȭ
	{
		for (x = 0; x < 6; x++) 
		{
			*(*(pptr + y) + x) = 6 * y + x;
		}
	}

	for (y = 0; y < 8; y++)		//8 * 6���� �迭 ���� ���
	{
		for (x = 0; x < 6; x++)
		{
			printf("%3d", *(*(pptr + y) + x));
		}
		printf("\n");
	}
	
	for (y = 0; y < 8; y++)		//8���� �������� �����͹迭�� �޸� ��ȯ
	{
		free(*(pptr + y));
	}
}