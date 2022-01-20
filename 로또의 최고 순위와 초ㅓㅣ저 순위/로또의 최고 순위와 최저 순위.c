#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int* answer = (int*)malloc(sizeof(int) * 2);
    int i, j;
    int answerCnt = 0;    //�˾ƺ� �� �ִ� ���� �� ���� ���� = ���� ������ ����
    int zeroCnt = 0;

    for (i = 0; i < 6; i++)
    {
        if (lottos[i] == 0)
        {
            zeroCnt++;
        }
    }

    for (i = 0; i < 6; i++) 
    {
        for (j = 0; j < 6; j++)
        {
            if (win_nums[i] == lottos[j])
            {
                answerCnt++;
            }
        }
    }

    //�ְ����
    if (answerCnt + zeroCnt >= 6)
    {        
        *answer = 1;
    }
    else
    {
        if (answerCnt + zeroCnt <= 1) {
            *answer = 6;
        }
        else
        {
            *answer = 7 - (answerCnt + zeroCnt);
        }       
    }

    //��������
    if (answerCnt <= 1)
    {
        *(answer + 1) = 6;
    }
    else
    {
        *(answer + 1) = 7 - answerCnt;
    }
    
    return answer;
}

int main() {
    int lottos[] = { 44, 1, 0, 0, 31, 25 };
    int win_nums[] = { 31, 10, 45, 1, 6, 19 };

    for (int i = 0; i < 2; i++) 
    {
        printf("%d", *(solution(lottos, 6, win_nums, 6) + i));
    }   
}