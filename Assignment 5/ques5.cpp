#include <iostream>
using namespace std;

// base class
class base {
public:
    base() {
        cout << "base constructor executed" << endl;
    }

    ~base() {
        cout << "base destructor executed" << endl;
    }
};

// derived class
class derived : public base {
public:
    derived() {
        cout << "derived constructor executed" << endl;
    }

    ~derived() {
        cout << "derived destructor executed" << endl;
    }
};

int main() {
    cout<<"Deepak kumar 1024150071"<<endl;
    derived obj1;
    return 0;
}