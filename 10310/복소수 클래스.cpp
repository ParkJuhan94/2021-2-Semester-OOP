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

        this->realNum_ += sum.realNum_;               //원본 계산
        this->imaginaryNum_ += sum.imaginaryNum_;

        return *this;

        //a.addTo(a).addTo(b).addTo(c);  // 개념적으로 말하자면 a += a; a+= b; a+= c;
    }

    /*
    Complex addTo(Complex sum) {
        Complex cpy;
        cpy.setValue(realNum_, imaginaryNum_);  //사본 초기화

        cpy.realNum_ += sum.realNum_;               //사본 계산
        cpy.imaginaryNum_ += sum.imaginaryNum_;

        setValue(cpy.realNum_, cpy.imaginaryNum_);  //원본 초기화

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
    a.setValue(1.1, 2.2);   // 이것은 1.1 + 2.2i 라는 뜻.
    b.setValue(2.2, 3.3);

    c = add(a, b);  // add는 global 함수이다. 작성하라. 실수부는 실수부끼리, 허수부는 허수부끼리 더한다.

    a.addTo(b);  //  a에 b를 더한다.    

    d = sub(a, b);  // 뺄셈을 나타내는 global 함수. a 에서 b를 뺀다.

    cout << "a = ";
    a.print();   // 자기 자신의 값을 복소수 형태로 출력하라.
    cout << "c = ";
    c.print();
    cout << "d = ";   // 추가. 2017.9.28.
    d.print();      // 추가. 2017.9.28.    

    a.addTo(a).addTo(b).addTo(c);  // 개념적으로 말하자면 a += a; a+= b; a+= c;
    cout << "a = ";
    a.print();

    /* 
        a = 3.3 + 5.5i
        c = 3.3 + 5.5i
        d = 1.1 + 2.2i
        a = 12.1 + 19.8i
        도출해야할 출력.
    */
}
