#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int potato = 2;
	int carrot = 1;
	int onion = 3;
	int person;

	for (person = 0; person * potato <= 20 && person * carrot <= 9 && person * onion <= 22; person++)
	{
		//�������
	}
	
	printf("%d�κ��� ī���� ���� �� �ֽ��ϴ�.\n", person - 1);	//for������ person++�� �� ���� ����
}