// include 등은 필요하면 추가
#include <iostream>
#include "GirlGroup.h"
#include "Member.h"
// main 함수의 내용은 수정하지 않는다.
int main() {
    GirlGroup* gg = new GirlGroup("블랙핑크");
    Member* s1, * s2, * s3, * s4;
    s1 = new Member("지수");
    s2 = new Member("제니");
    s3 = new Member("로제");
    s4 = new Member("리사");
    gg->addMember(s1); gg->addMember(s2); gg->addMember(s3); gg->addMember(s4);
    gg->tellme();   // 그룹 소개
    s1->tellme();  // 개인 소개
    gg->setName("Black Pink");  // 그룹 이름이 바뀌면...
    s3->tellme();            // 자동으로 소개 내용도 바뀐다.
    return 0;
}