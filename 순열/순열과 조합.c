#include<stdio.h>

int arr[4] = { 1,2,3,4 };
int A[4];	//for ����
int B[4];	//for ����

void swap(int* first, int* second) {
	int temp = *first;
	*first = *second;
	*second = temp;
}

void permutation(int N, int R, int q)
{

	if (R == 0) {
		for (int i = 0; i < q; i++)
		{
			printf("%d ", B[i]);
		}
		printf("\n");
		return;
	}


	for (int i = N - 1; i >= 0; i--)
	{
		swap(&arr[i], &arr[N - 1]);
		B[R - 1] = arr[N - 1];
		permutation(N - 1, R - 1, q);
		swap(&arr[i], &arr[N - 1]);
	}
}


void combination(int N, int R, int q)
{
	if (R == 0)
	{
		for (int i = q - 1; i >= 0; i--)
		{
			printf("%d ", A[i]);
		}
		printf("\n");
	}
	else if (N < R)
	{
		return;
	}
	else
	{
		A[R - 1] = arr[N - 1];
		combination(N - 1, R - 1, q);
		combination(N - 1, R, q);
	}


}

int main(void)
{
	int N = 4;
	int R = 3;

	printf("����: \n");
	permutation(N, R, R);

	printf("-----------------------\n");

	printf("����: \n");
	combination(N, R, R);
}
