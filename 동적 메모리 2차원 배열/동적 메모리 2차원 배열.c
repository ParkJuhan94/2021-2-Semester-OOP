#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, x, y;
	int** pptr = (int**)malloc(sizeof(int*) * 8);	//8개의 포인터의 포인터배열 메모리할당

	for (i = 0; i < 8; i++) 
	{
		*(pptr + i) = (int*)malloc(sizeof(int) * 6);	//6개의 포인터배열
	}

	for (y = 0; y < 8; y++)		//8 * 6개의 배열 원소 초기화
	{
		for (x = 0; x < 6; x++) 
		{
			*(*(pptr + y) + x) = 6 * y + x;
		}
	}

	for (y = 0; y < 8; y++)		//8 * 6개의 배열 원소 출력
	{
		for (x = 0; x < 6; x++)
		{
			printf("%3d", *(*(pptr + y) + x));
		}
		printf("\n");
	}
	
	for (y = 0; y < 8; y++)		//8개의 포인터의 포인터배열을 메모리 반환
	{
		free(*(pptr + y));
	}
}