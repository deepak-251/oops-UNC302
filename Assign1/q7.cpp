#include <iostream>
using namespace std;
//Deepak 1024150071
int main() {
    int a;
    int b;
    cout << "enter two numbers: ";
    cin >> a >> b;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "after swapping:" << endl;
    cout << "a = " << a << " b = " << b;
    return 0;
}
