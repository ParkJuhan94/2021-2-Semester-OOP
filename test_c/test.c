#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stu {
    int id;
    char* name;
    float gpa;   // 평점 평균
};

struct stu* getStudent() {
    // 표준 입력에서 한 학생의 ID, 이름, 평점평균을 입력해서
    // 성공하면 메모리를 할당하고 저장한 후 포인터를 돌려준다.
    // 이름의 최대 글자수는 255 (영문 기준)으로 한다.
    struct stu* ptrStu = 0;
    int id;
    char name[256];
    float gpa;

    if (scanf("%d %s %f", &id, name, &gpa) == 3) {
        name[strlen(name)] = 0;
        ptrStu = (struct stu*)malloc(sizeof(struct stu));
        ptrStu->name = (char *)malloc(sizeof(char) * 256);
        ptrStu->id = id;
        strcpy(ptrStu->name, name);
        ptrStu->gpa = gpa;
    }    
    return ptrStu;
}

void printStudent(struct stu* ptrStu) {
    printf("%d %s %f", ptrStu->id, ptrStu->name, ptrStu->gpa);
}

int main() {
    struct stu* kim = 0;  // 포인터는 0으로 초기화한다.

    kim = getStudent();
    if (kim) {
        printStudent(kim);
    }
}
