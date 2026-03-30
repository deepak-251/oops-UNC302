#include <iostream>
using namespace std;

// base class
class base {
public:
    void ShowMessage() {
        cout << "inheritance demo running" << endl;
    }
};

// hierarchical inheritance
class child1 : public base { };
class child2 : public base { };

// multilevel inheritance
class grandchild : public child1 { };

// simple independent class
class extra { };

// hybrid inheritance
class hybridchild : public base, public extra { };

int main() {
    cout<<"Deepak Kumar 1024150071"<<endl;
    child1 c1;
    child2 c2;
    grandchild g1;
    hybridchild h1;

    c1.ShowMessage();
    c2.ShowMessage();
    g1.ShowMessage();
    h1.ShowMessage();

    return 0;
}