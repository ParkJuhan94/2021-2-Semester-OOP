#include "dog.h"
#include "dogschool.h"
// �ʿ��� include ���� ���ش�.
int main() {
    Dog* d1, * d2;
    d1 = new Dog("ö��");
    d2 = new Dog("����");

    DogSchool* ds = new DogSchool("���� �ְ��б�");

    ds->RegisterDog(d1);  // d1�� �ְ��б��� ��Ͻ�Ų��.
    ds->RegisterDog(d2);  // d2�� �ְ��б��� ��Ͻ�Ų��.
    ds->RegisterDog(new Dog("����"));
    ds->ShowDogs(); // �б��� �ִ� ������ ���� �Ұ���Ų��.
    d1->DropSchool();   // ö���� �����Ų��.
    ds->ShowDogs();   //
    d2->SetName("Snoopy");   // ������ �̸��� Snoopy�� �ٲ۴�.
    ds->SetName("MJ Canine School");  // �б� �̸��� �ٲ۴�.
    ds->ShowDogs();   // �ٲ� �̸��� �ݿ��Ǿ�� �Ѵ�.
}
~
