// 필요한 include 등을 해준다.
#include <iostream>
#include "Dogschool.h"
#include "Dog.h"

int main() {
	Dog* d1, * d2;
	d1 = new Dog("철수");
	d2 = new Dog("영이");

	Dogschool* ds = new Dogschool("명지 애견학교");

	ds->RegisterDog(d1);  // d1을 애견학교에 등록시킨다.
	ds->RegisterDog(d2);  // d2을 애견학교에 등록시킨다.
	ds->RegisterDog(new Dog("똘이"));
	ds->ShowDogs(); // 학교에 있는 개들을 전부 소개시킨다.
	d1->DropSchool();   // 철수를 자퇴시킨다.
	ds->ShowDogs();   //    
	d2->SetName("Snoopy");   // 영이의 이름을 Snoopy로 바꾼다.
	ds->SetName("MJ Canine School");  // 학교 이름을 바꾼다.
	ds->ShowDogs();   // 바뀐 이름이 반영되어야 한다.
}