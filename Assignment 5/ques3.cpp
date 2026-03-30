#include <iostream>
using namespace std;

// base class
class base {
public:
    int data;
};

// different inheritance modes
class publicchild : public base { };
class protectedchild : protected base { };
class privatechild : private base { };

int main() {
    cout<<"Deepak Kumar 1024150071"<<endl;
    publicchild obj;

    obj.data = 15;
    cout << "value is: " << obj.data << endl;

    return 0;
}