#include <iostream>
using namespace std;

template<typename T, typename U>
class Arithmetic{
    public:
    T valA;
    U valB;
    Arithmetic(T i, U j):valA(i), valB(j){}
    T add(){
        return valA + valB;
    }
    T subtract(){
        return valA - valB;
    }
    T multiply(){
        return valA * valB;
    }
    T divide(){
        if (valB == 0){
            cout << "ERROR!" << endl;
            exit(-1);
        }
        return valA / valB;
    }
};

int main(){
    Arithmetic<float, int> calc(2.1, 2);
    cout << "Addition : " << calc.add() << endl;
    cout << "Subtraction : " << calc.subtract() << endl;
    cout << "Multiplication : " << calc.multiply() << endl;
    cout << "Division : " << calc.divide() << endl;
    return 0;
}