#include <iostream>
using namespace std;

template<typename T>
int linearSearch(T *dataset, T target, int len){
    for(int count = 0; count < len; count++){
        if(dataset[count] == target){
            return count;
        }
    }
    return -1;
}

int main(){
    int nums[] = {21, -11, 42, 53, 661, 11, 1};
    float decs[] = {-1, -214, -21.432, -54.231, -93.2, 0, -9};
    cout << linearSearch(nums, 42, 7) << endl;
    cout << linearSearch(nums, 421, 7) << endl;
    cout << linearSearch(decs, -93.2f, 7) << endl;
    cout << linearSearch(decs, 21.0f, 7) << endl;
    return 0;
}