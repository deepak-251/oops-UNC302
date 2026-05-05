#include <iostream>
using namespace std;

template <class T>
class stack {
public:
    T dataStore[100];
    int topIndex; // Removed 'static' so every stack has its own top pointer

    stack() {
        topIndex = 0; // Initialize topIndex for each instance
    }

    void push(T entry) {
        if (topIndex >= 100) {
            cout << "Stack Overflow" << endl;
            return;
        }
        dataStore[topIndex] = entry;
        topIndex++;
    }

    T pop() {
        if (topIndex <= 0) {
            cout << "Stack Underflow" << endl;
            return T(); // Returns default value of T if empty
        }
        return dataStore[--topIndex];
    }

    void show() {
        if (topIndex == 0) {
            cout << "Stack is empty";
        }
        for (int i = 0; i < topIndex; i++) {
            cout << dataStore[i] << ' ';
        }
        cout << endl;
    }
};

int main() {
    stack<int> customStack;
    customStack.push(11);
    customStack.push(41);
    customStack.pop();
    customStack.push(21);
    customStack.pop();
    customStack.push(21);
    customStack.push(2541);
    customStack.show();
    
    return 0;
}