//Question 1(a)
#include <iostream>
using namespace std;

class A{
public:
    int x;
    void set(int a){ x=a; }
    void show(){ cout<<x<<endl; }
};
int main(){
    cout<<"Deepak 1024150071"<<endl;
    A k,*p;
    p=&k;
    k.set(36);
    k.show();
    p->set(50);
    p->show();
}

// // Question 1(b)
//  #include <iostream>
// using namespace std;

// class A{
//     int x;
// public:
//     void set(int x){ this->x=x; }
//     void show(){ cout<<x; }
// };
// int main(){
//     cout<<"Deepak 1024150071"<<endl;
//     A k;
//     k.set(8);
//     k.show();
// }

// //Quetion 2:
// #include <iostream>
// using namespace std;

// class B;
// class A{
//     int x;
// public:
//     A(int a){ x=a; }
//     friend void swap(A&,B&);
//     void show(){ cout<<x<<endl; }
// };
// class B{
//     int y;
// public:
//     B(int b){ y=b; }
//     friend void swap(A&,B&);
//     void show(){ cout<<y<<endl; }
// };
// void swap(A &a,B &b){
//     int t=a.x;
//     a.x=b.y;
//     b.y=t;
// }
// int main(){
//     cout<<"Deepak 1024150071"<<endl;
//     A a(10); B b(20);
//     swap(a,b);
//     a.show(); b.show();
// }

// //Question 3:
// #include <iostream>
// using namespace std;

// class B;
// class A{
//     int x;
// public:
//     A(int a){ x=a; }
//     friend int add(A,B);
// };
// class B{
//     int y;
// public:
//     B(int b){ y=b; }
//     friend int add(A,B);
// };
// int add(A a,B b){
//     return a.x+b.y;
// }
// int main(){
//     cout<<"Deepak 1024150071"<<endl;
//     A a(13);
//     B b(50);
//     cout<<add(a,b);
// }

// //Question 4
// #include <iostream>
// using namespace std;

// class B;
// class A{
//     int x;
// public:
//     A(){ x=564; }
//     friend class B;
// };
// class B{
// public:
//     void show(A a){ cout<<a.x; }
// };
// int main(){
//     cout<<"Deepak 1024150071"<<endl;
//     A a;
//     B b;
//     b.show(a);
// }

// //Question 5
// #include <iostream>
// using namespace std;

// class Rec{
//     int l;
//     int b;
// public:
//     void get(){ cin>>l>>b; }
//     void area(){ cout<<l*b<<endl; }
// };
// int main(){
//     Rec r[3];
//     for(int i=0;i<3;i++) r[i].get();
//     for(int i=0;i<3;i++) r[i].area();
// }

// //Question 6
// #include <iostream>
// using namespace std;

// inline int cube(int x){
//     return x*x*x;
// }
// int main(){
//     cout<<"Deepak 1024150071"<<endl;
//     int n; 
//     cin>>n;
//     cout<<cube(n);
// }

// //Question 7(a) 
// #include <iostream>
// using namespace std;

// class A{
// public:
//     int x;
// };
// A fun(A a){
//     a.x+=10;
//     return a;
// }
// int main(){
//     cout<<"Deepak 1024150071"<<endl;
//     A a,b;
//     a.x=20;
//     b=fun(a);
//     cout<<a.x<<endl;
//     cout<<b.x<<endl;
// }

// //Question 7(b) 
// #include <iostream>
// using namespace std;

// class A{
// public:
//     int x;
// };
// A fun(A &a){
//     a.x+=10;
//     return a;
// }
// int main(){
//     cout<<"Deepak 1024150071"<<endl;
//     A a,b;
//     a.x=10;
//     b=fun(a);
//     cout<<a.x<<endl<<b.x;
// }
