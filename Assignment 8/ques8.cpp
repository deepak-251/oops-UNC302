#include <iostream>
using namespace std;

template<typename T>
class Pair{
    public:
    T first;
    T second;
    Pair(T v1, T v2):first(v1), second(v2){}
    void showpair(){
        cout << "The pair of data is : " << first << ' ' << second << endl;
    }
};

int main(){
    Pair<int> set1(3, 4);
    set1.showpair();
    Pair<double> set2(4.0, 51.1);
    set2.showpair();
    return 0;
}