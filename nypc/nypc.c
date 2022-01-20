#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int potato = 2;
	int carrot = 1;
	int onion = 3;
	int person;

	for (person = 0; person * potato <= 20 && person * carrot <= 9 && person * onion <= 22; person++)
	{
		//비어있음
	}
	
	printf("%d인분의 카레를 만들 수 있습니다.\n", person - 1);	//for문에서 person++이 된 것을 차감
}