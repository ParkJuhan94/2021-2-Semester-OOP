#include <iostream>
using namespace std;

class Complex
{
private:
    double realNum_;
    double imaginaryNum_;
public:
    void setValue(double r, double i) {
        realNum_ = r;
        imaginaryNum_ = i;
    }    

    double getReal() {
        return realNum_;
    }

    double getImaginary() {
        return imaginaryNum_;
    }

    void print() {
        cout << realNum_ << " + "  << imaginaryNum_ << "i" << endl;
    }

    Complex& addTo(Complex sum) {        

        this->realNum_ += sum.realNum_;               //���� ���
        this->imaginaryNum_ += sum.imaginaryNum_;

        return *this;

        //a.addTo(a).addTo(b).addTo(c);  // ���������� �����ڸ� a += a; a+= b; a+= c;
    }

    /*
    Complex addTo(Complex sum) {
        Complex cpy;
        cpy.setValue(realNum_, imaginaryNum_);  //�纻 �ʱ�ȭ

        cpy.realNum_ += sum.realNum_;               //�纻 ���
        cpy.imaginaryNum_ += sum.imaginaryNum_;

        setValue(cpy.realNum_, cpy.imaginaryNum_);  //���� �ʱ�ȭ

        return cpy;
    }*/ 
};

Complex add(Complex a, Complex b) {
    Complex c;
    double realNum;
    double imaginaryNum;

    realNum = a.getReal() + b.getReal();
    imaginaryNum = a.getImaginary() + b.getImaginary();

    c.setValue(realNum, imaginaryNum);

    return c;
}

Complex sub(Complex a, Complex b) {
    Complex c;
    double realNum;
    double imaginaryNum;

    realNum = a.getReal() - b.getReal();
    imaginaryNum = a.getImaginary() - b.getImaginary();

    c.setValue(realNum, imaginaryNum);

    return c;
}

int main() {
    Complex a, b, c, d;
    a.setValue(1.1, 2.2);   // �̰��� 1.1 + 2.2i ��� ��.
    b.setValue(2.2, 3.3);

    c = add(a, b);  // add�� global �Լ��̴�. �ۼ��϶�. �Ǽ��δ� �Ǽ��γ���, ����δ� ����γ��� ���Ѵ�.

    a.addTo(b);  //  a�� b�� ���Ѵ�.    

    d = sub(a, b);  // ������ ��Ÿ���� global �Լ�. a ���� b�� ����.

    cout << "a = ";
    a.print();   // �ڱ� �ڽ��� ���� ���Ҽ� ���·� ����϶�.
    cout << "c = ";
    c.print();
    cout << "d = ";   // �߰�. 2017.9.28.
    d.print();      // �߰�. 2017.9.28.    

    a.addTo(a).addTo(b).addTo(c);  // ���������� �����ڸ� a += a; a+= b; a+= c;
    cout << "a = ";
    a.print();

    /* 
        a = 3.3 + 5.5i
        c = 3.3 + 5.5i
        d = 1.1 + 2.2i
        a = 12.1 + 19.8i
        �����ؾ��� ���.
    */
}
