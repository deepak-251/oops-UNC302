#include <iostream>
using namespace std;

class secondclass;
class firstclass{
    int a;
    friend int addfreinds(firstclass &a, secondclass &b);
    public:
    firstclass(int a):a(a){}
};

class secondclass{
    int b;
    friend int addfreinds(firstclass &a, secondclass &b);
    public:
    secondclass(int a):b(a){}

};

int addfreinds(firstclass &a, secondclass &b){
    return a.a + b.b;
}

int main(){
    firstclass obj1(3);
    secondclass obj2(1);

    cout << "Using friend function : \n" << "Sum : " << addfreinds(obj1, obj2) << endl;
    return 0; 
}