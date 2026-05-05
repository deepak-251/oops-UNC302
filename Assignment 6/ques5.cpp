#include <iostream>
using namespace std;

class Complex{
    float real;
    float imaginary;
    
    public:
    Complex(float real, float imaginary):real(real), imaginary(imaginary){}
    Complex(Complex &c){
        real = c.real;
        imaginary = c.imaginary;
    }
    void display(){
        cout << real << "+" << imaginary << 'i' << endl;
    }

    friend void sum(Complex &c1, Complex &c2);
};

void sum(Complex &c1, Complex &c2){
    cout << "Sum of the two complex numbers is : " << c1.real + c2.real << '+' << c1.imaginary + c2.imaginary << 'i' << endl;
    return;
}

int main(){
    Complex a(2.1, 4);
    Complex b(1, 0);
    Complex c(b);
    a.display();
    b.display();
    c.display();
    sum(a, c);
    return 0;
}