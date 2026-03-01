//question 2
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
    ~rect(){
        cout<<"object destroyed\n";
    }
};

int main(){
    cout<<"Deepak Kumar(1024150071)"<<endl;
    rect r[3]={ rect(), rect(6), rect(2,9) };
    for(int i=0;i<3;i++){
        cout<<"area "<<i+1<<" = "<<r[i].area()<<endl;
    }
    return 0;
}