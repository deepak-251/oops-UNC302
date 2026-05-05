#include <iostream>
using namespace std;

template<typename T>
void process(T val){
    cout << "Only 1 parameter of a type" << endl;
}
template<typename T>
void process(T first, T second){
    cout << "2 parameters of same type" << endl;
}
template<typename T, typename U>
void process(T first, U second){
    cout << "2 parameters of different type" << endl;
}

int main(){
    process(2);
    process(2, 2);
    process(2.0, 2.0f);
    return 0;
}