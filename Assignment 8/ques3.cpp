#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T *collection, int n){
    for(int pass = 0; pass < n; pass++){
        for(int k = 0; k + 1 < n; k++){
            if(collection[k] > collection[k + 1]){
                T aux = collection[k];
                collection[k] = collection[k + 1];
                collection[k + 1] = aux;
            }
        }
    }
}

int main(){
    int list1[] = {21, -11, 42, 53, 661, 11, 1};
    float list2[] = {-1, -214, -21.432, -54.231, -93.2, 0, -9};
    bubbleSort(list1, 7);
    bubbleSort(list2, 7);
    for(int x = 0; x < 7; x++){
        cout << list1[x] << ' ';
    }cout << endl;
    for(int x = 0; x < 7; x++){
        cout << list2[x] << ' ';
    }cout << endl;
    return 0;
}