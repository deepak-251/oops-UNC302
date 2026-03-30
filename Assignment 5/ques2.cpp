#include <iostream>
using namespace std;

// base class
class base {
protected:
    int num;

public:
    base() {
        num = 20;
    }
};

// derived class
class derived : public base {
public:
    void showvalue() {
        cout << "stored value is: " << num << endl;
    }
};

int main() {
    cout<<"Deepak Kumar 1024150071"<<endl;
    derived d1;
    d1.showvalue();

    return 0;
}