#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
  
    int i, tmp;
    int* answer = (int*)calloc(n * (n + 1) / 2 + 5, sizeof(int));
    
    for (i = 0; i <= n; i++) {     //왼쪽 채우기
      
        answer[i * (i + 1) / 2] = i + 1;     
    }
    tmp = i - 1;

    for (i = (n - 1) * n / 2 + 1; i < n * (n + 1) / 2; i++) {     //아래쪽 채우기

        answer[i] = tmp + 1;
        tmp++;
    }
    
    for (i = n - 1; i >= 2; i--) {        //오른쪽 채우기
        
        answer[i * (i + 1) / 2 - 1] = tmp + 1;
        tmp++;
    }




    return answer;
}

int main() {
    int n;  
    scanf("%d", &n);
    int* arr = solution(n);

    for (int i = 0; i < n * (n + 1) / 2; i++) {
        printf("%d,", arr[i]);
    }    
}