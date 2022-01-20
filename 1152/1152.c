#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int main() {
	char str[1000000];
	int num = 0;
	int was_space = 1;	//1: 바로 전 문자가 space이다.   
						//처음의 공백이 카운팅되는걸 방지하려고 1로 초기화
	scanf("%[^\n]", str);
	
	for (int i = 0; str[i] != '\0'; i++) {				
		if (isspace(str[i])) {		//공백일 때			
			was_space = 1;
		}							
		else {						//공백 아닐 때
			if (was_space == 1) {
				num++;
			}
			was_space = 0;
		}
	}

	printf("%d", num);
}