#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int i, j;
//제거된 후의 문자를 정수로 변환하는 함수
//convertToNum("1x2x",2,4) -> 12
int convertToNum(char* number, int len) {

    int res = 0;
   
    for (i = 0; i < len; i++)
    {
        if (number[i] != 'x')
        {
            res *= 10;
            res += number[i] - '0';
        }        
    }
    return res;
}

//정수를 문자열로 변환하는 함수
//printf("%s\n", convertToStr(1234, 4)) -> "1234"
char* convertToStr(int num, int len) {

    char* res = (char*)malloc(len + 5);

    for (i = len - 1; i >= 0; i--)
    {           
        res[i] = num % 10 + '0';        
        num /= 10;
    }

    res[len] = '\0'; 

    return res;
}

char* solution(char* number, int k) {

    int temp = 0;
    int max = 0;
    int len = strlen(number);
    char* tempNumber     = (char*)malloc(len + 5);        
    char* answer         = (char*)malloc(len - k + 1);    
    tempNumber[len - k] = '\0';
    answer[len - k] = '\0';
    
for (i = 0; i < len - 1; i++) 
{
    for (j = i + 1; j < len; j++)
    {
        strcpy(tempNumber, number);
        tempNumber[i] = 'x';
        tempNumber[j] = 'x';
            
        printf("%s\n", tempNumber);

        if (convertToNum(tempNumber, len) > max)
        {
            max = convertToNum(tempNumber, len);
        }
    }        
}  
    answer = convertToStr(max, len);

    return answer;
} 

int main() {
    //test
    printf("%d\n", convertToNum("3x5x6xx7",8)); //3567
    printf("%s\n", convertToStr(1234, 4));      //"1234"
    //printf("%s\n", solution("1924", 2));      //"94"
}