#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int	group(int _n) {	//n이 몇번째 그룹에 속하는지 반환
	int i;
	for (i = 1; !((i-1)*(i) / 2 < _n && _n <= (i)*(i+1) / 2)   ; i++)
	{
		//비어있음
	}
	return i;
}


int in_group(int _n) {	//그룹 안에서 몇번째 인지 반환
	int i;
	for (i = 1; !((i - 1) * (i) / 2 < _n && _n <= (i) * (i + 1) / 2); i++)
	{
		//비어있음
	}
	return _n - (i - 1) * (i) / 2;
}

int main() {
	int n, top, bottom;
	
	scanf("%d", &n);
	
	if (group(n) % 2)
	{
		top = group(n) - in_group(n) + 1;
		bottom = in_group(n);
	}
	else
	{
		bottom = group(n) - in_group(n) + 1;
		top = in_group(n);
	}
	printf("%d/%d", top, bottom);
}