/*
구조체를 주어진 코드와 같이 동적할당하라.

============ Data Set 1: ===================================================
60214321  aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa  3.5
-------- 정답: --------
60214321  aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
 3.5
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef
struct stu {
    int id;
    char* name;
    float gpa;   // 평점 평균
}Stu;

Stu* getStudent() {
    // 표준 입력에서 한 학생의 ID, 이름, 평점평균을 입력해서
    // 성공하면 메모리를 할당하고 저장한 후 포인터를 돌려준다.
    // 이름의 최대 글자수는 255 (영문 기준)으로 한다.
    Stu* ptrStu = 0;

    ptrStu = (Stu*)malloc(sizeof(Stu));
    ptrStu->name = (char*)malloc(sizeof(char) * 256);
    scanf("%d %s %f", &ptrStu->id, ptrStu->name, &ptrStu->gpa);

    return ptrStu;
}

void printStudent(Stu* p) {
    printf("%d %s %f\n", p->id, p->name, p->gpa);
}

int main() {
    Stu* kim = 0;  // 포인터는 0으로 초기화한다.

    kim = getStudent();

    if (kim) {
        printStudent(kim);
    }
}
