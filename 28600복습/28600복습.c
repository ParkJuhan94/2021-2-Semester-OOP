#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct stu {
    int id;
    char name[20];
    float gpa;
};

struct stu* getStudent() {
    struct stu* ptrStu;
    ptrStu = (struct stu*)malloc(sizeof(struct stu));
    scanf("%d %s %f", &ptrStu->id, ptrStu->name, &ptrStu->gpa);

    return ptrStu;
}

printStudent(struct stu* a) {
    printf("%d %s %f\n", a->id, a->name, a->gpa);
}

int main() {
    struct stu* kim;
    kim = getStudent();
    printStudent(kim);  // 학번, 이름, 평점을 출력하는 함수를 작성하라.

}