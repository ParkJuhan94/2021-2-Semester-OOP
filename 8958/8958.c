#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int num;
	char ox[80];
	int sum, add;	//sum: �������� add: �߰�����

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {	//�׽�Ʈ���̽� �ݺ�
		scanf("%s", ox);
		sum = 0; 
		add = 1;

		for (unsigned int i = 0; i < strlen(ox); i++) {	//strlen: ���ڿ��� ����
			if (ox[i] == 'O') {
				sum += add;
				add++;		//O�� ���ӵǸ� �߰������� ++
			}
			else {
				add = 1;	// O�� ������ �������� add�� 1�� �ʱ�ȭ
			}			
		}
		printf("%d\n", sum);
	}	
}