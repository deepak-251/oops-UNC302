#include <iostream>
using namespace std;

template <typename T>
void swapvariables(T &val1, T &val2){
    T holder = val1;
    val1 = val2;
    val2 = holder;
    return;
}

int main(){
    int p = 4, q = 9;
    swapvariables(p, q);
    cout << p << ' ' << q << endl;
    float m = 3.11, n = 21.41;
    swapvariables(m, n);
    cout << m << ' ' << n << endl;
    return 0;
}