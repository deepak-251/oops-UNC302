#include <iostream>
using namespace std;

// parent class
class parent {
public:
    void printbase() {
        cout << "this is the parent class method" << endl;
    }
};

// child class inheriting parent
class child : public parent {
public:
    void printderived() {
        cout << "this is the child class method" << endl;
    }
};

int main() {
    cout<<"Deepak kumar 1024150071"<<endl;
    parent baseobj;
    child derivedobj;

    // calling parent class method
    baseobj.printbase();

    // child class accessing both methods
    derivedobj.printbase();
    derivedobj.printderived();

    return 0;
}