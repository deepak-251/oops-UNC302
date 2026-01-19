#include <iostream>
using namespace std;
// Deepak 1024150071
int main() {
    int a;
    int b;
    int c;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    cout<<"1.add 2.subtract 3.multiply 4.divide\n";
    cin>>c;
    switch (c) {
        case 1: cout<<a + b; break;
        case 2: cout<<a - b; break;
        case 3: cout<<a * b; break;
        case 4: cout<<(float)a / b; break;
        default: cout<<"invalid choice";
    }
    return 0;
}
