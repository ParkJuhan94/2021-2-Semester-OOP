#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int main() {
	char str[1000000];
	int num = 0;
	int was_space = 1;	//1: �ٷ� �� ���ڰ� space�̴�.   
						//ó���� ������ ī���õǴ°� �����Ϸ��� 1�� �ʱ�ȭ
	scanf("%[^\n]", str);
	
	for (int i = 0; str[i] != '\0'; i++) {				
		if (isspace(str[i])) {		//������ ��			
			was_space = 1;
		}							
		else {						//���� �ƴ� ��
			if (was_space == 1) {
				num++;
			}
			was_space = 0;
		}
	}

	printf("%d", num);
}