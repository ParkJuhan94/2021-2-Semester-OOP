/*
위와 같은 구조체가 있다. 표준 입력에서 구조체를 만들고 입력하기 위한 함수
getStudent를 정의하라.

힌트:
prototype은 :  struct stu * getStudent();
함수 내에서 포인터를 이용하여 동적할당을 받고 내용을 채운 다음 포인터를 돌려주면 된다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef
struct stu {
	int id;
	char name[20];	//	지금 정적할당
	float gpa;
}Stu;

Stu* getStudent() {
	Stu* p = (Stu*)malloc(sizeof(Stu));
	//	p->name = (char*)malloc(sizeof(char) * 20);		//	동적할당이 필요 없음. 배열로 이미 정적할당 되어있어서

	scanf("%d %s %f", &p->id, p->name, &p->gpa);

	return p;
}

void printStudent(Stu* p) {
	printf("%d %s %f\n", p->id, p->name, p->gpa);
}

int main() {
	//	main은 건드리지 않는다.
	struct stu* kim;
	kim = getStudent();
	printStudent(kim);  // 학번, 이름, 평점을 출력하는 함수를 작성하라.
}
