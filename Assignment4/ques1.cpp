//question 1

#include<iostream>
using namespace std;

class rect{
    int l,b;
public:
    rect(){
        l=0;
        b=0;
    }
    rect(int x){
        l=x;
        b=x;
    }
    rect(int x,int y){
        l=x;
        b=y;
    }
    int area(){
        return l*b;
    }
};

int main(){
    cout<<"Deepak Kumar(1024150071)"<<endl;
    rect r1;
    rect r2(7);        
    rect r3(3,8);      

    cout<<"area (no value): "<<r1.area()<<endl;
    cout<<"area (one value): "<<r2.area()<<endl;
    cout<<"area (two values): "<<r3.area()<<endl;

    return 0;
}