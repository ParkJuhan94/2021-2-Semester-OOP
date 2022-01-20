#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 2);
    int i, j;
    int answerCnt = 0;    //알아볼 수 있는 숫자 중 정답 갯수 = 최저 순위의 갯수
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

    //최고순위
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

    //최저순위
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