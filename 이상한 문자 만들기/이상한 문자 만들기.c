#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* s) {

    int i, cnt = 0;
    char* answer = (char*)malloc(strlen(s) + 1);
    strcpy(answer, s);
     
    //'A' = 32    'a' = 64
    for (i = 0; answer[i] != 0; i++) {

        if (answer[i] == ' ') {
                               
            cnt = -1;   
            //cnt = 0;     
            //continue;
        }
        else if ((cnt % 2 == 0) && (answer[i] >= 'a')) {

            answer[i] -= 32;
            //cnt++;
        }
        else if ((cnt % 2 == 1) && (answer[i] <= 'Z')){

            answer[i] += 32;
            //cnt++;     
        }
        cnt++;
    }
    return answer;
}

int main() {
    char str[100];
    scanf("%[^\n]", str);
    
    printf("%s", solution(str));
}