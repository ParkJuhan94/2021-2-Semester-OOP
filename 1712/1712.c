#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int break_even_point(int _cost_fixed, int _cost_variable, int _price) {
	if (_price - _cost_variable > 0)
	{
		return 1;	//손익분기점 존재
	}
	else {
		return 0;	//손익분기점 미존재
	}
}


int main() {
	int cost_fixed;
	int cost_variable;
	int price;
	int point;	//손익분기점의 판매량

	scanf("%d %d %d", &cost_fixed, &cost_variable, &price);

	if (break_even_point(cost_fixed, cost_variable, price))		//손익분기점 존재
	{
		point = cost_fixed / (price - cost_variable) + 1;
		printf("%d", point);
	}
	else		//손익분기점 미존재
	{
		printf("-1\n");
	}
}