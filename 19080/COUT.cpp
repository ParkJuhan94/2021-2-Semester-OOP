#include <iostream>
#include <string>

class COUT {
public:
    COUT() :n_(0), d_(0), str_("") {
        //
    }  

    COUT& operator << (int n) {         
        this->n_ = n;
        printf("%d\n", n);
        return *this;
    }

    COUT& operator << (double d) {
        this->d_ = d;
        printf("%f\n", d);
        return *this;
    }

    COUT& operator << (const char* str) {
        this->str_ = str;
        printf("%s\n", str);
        return *this;
    }

private:
    int n_;
    double d_;
    std::string str_;    
};



int main() {
    COUT cout;
  
    cout << 99 << "Hello world" << 3.14;
}