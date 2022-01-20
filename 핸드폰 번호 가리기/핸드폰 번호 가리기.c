#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* phone_number) {
    int len = strlen(phone_number);
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* answer = (char*)malloc(len +1);
    
    strcpy(answer, phone_number);

    for (int i = 0; i < len - 4; i++)
    {
        answer[i] = '*';
    }

    return answer;
}

int main() {
    char pn[23];    //�ִ� ���� �� 20��

    scanf("%s", pn);
    printf("%s\n", solution(pn));
}