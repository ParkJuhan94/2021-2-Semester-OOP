// include ���� �ʿ��ϸ� �߰�
#include <iostream>
#include "GirlGroup.h"
#include "Member.h"
// main �Լ��� ������ �������� �ʴ´�.
int main() {
    GirlGroup* gg = new GirlGroup("����ũ");
    Member* s1, * s2, * s3, * s4;
    s1 = new Member("����");
    s2 = new Member("����");
    s3 = new Member("����");
    s4 = new Member("����");
    gg->addMember(s1); gg->addMember(s2); gg->addMember(s3); gg->addMember(s4);
    gg->tellme();   // �׷� �Ұ�
    s1->tellme();  // ���� �Ұ�
    gg->setName("Black Pink");  // �׷� �̸��� �ٲ��...
    s3->tellme();            // �ڵ����� �Ұ� ���뵵 �ٲ��.
    return 0;
}