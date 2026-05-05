#include <iostream>
using namespace std;

template <typename T>
T minimum(T *items, int length){
    if (length < 1){
        cerr << "No array!" << endl;
        exit(-1);
    }

    T smallest = items[0];
    for(int idx = 0; idx < length; idx++){
        if (items[idx] < smallest)
        smallest = items[idx];
    }
    return smallest;
}

int main(){
    int data1[] = {32, 43, 52, 22, 11};
    cout << minimum(data1, 5) << endl;
    float data2[] = {42.1, 12.4, -11, 57.1};
    cout << minimum(data2, 4) << endl;
    return 0;
}