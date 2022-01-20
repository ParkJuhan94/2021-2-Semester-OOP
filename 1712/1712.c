#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int break_even_point(int _cost_fixed, int _cost_variable, int _price) {
	if (_price - _cost_variable > 0)
	{
		return 1;	//���ͺб��� ����
	}
	else {
		return 0;	//���ͺб��� ������
	}
}


int main() {
	int cost_fixed;
	int cost_variable;
	int price;
	int point;	//���ͺб����� �Ǹŷ�

	scanf("%d %d %d", &cost_fixed, &cost_variable, &price);

	if (break_even_point(cost_fixed, cost_variable, price))		//���ͺб��� ����
	{
		point = cost_fixed / (price - cost_variable) + 1;
		printf("%d", point);
	}
	else		//���ͺб��� ������
	{
		printf("-1\n");
	}
}