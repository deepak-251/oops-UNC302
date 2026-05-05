#include <iostream>
using namespace std;

template<typename T>
class arrays{
    int capacity;
    T *elements;
    public:
    arrays(int total){
        capacity = total;
        elements = new T[total];
        for(int j = 0; j < total; j++){
            elements[j] = 0;
        }
    }
    void input(int limit){
        cout << "Enter data: ";
        for(int k = 0; k < capacity && k < limit; k++){
            cin >> elements[k];
        }
    }

    void show(int pos){
        cout << "Element as postion " << pos << " is : " << elements[pos] << endl;
    }
};

int main(){
    arrays<int> myArr(29);
    myArr.input(8);
    myArr.show(6);
    myArr.show(8);
    return 0;
}