#include <iostream>
using namespace std;

template<class T>
class Node{
    public:
    Node* nextPtr = nullptr;
    T val;
    Node(T input){
        val = input;
    }
    void showlist(){
        Node<T> *temp = this;
        while (temp != nullptr){
            cout << temp-> val << " ";
            temp = temp -> nextPtr;
        }
    }
    template<class U>
    friend void Enqueue(Node<U>* &start, U value);
    template<class U>
    friend U Dequeue(Node<U>* &start);
};

template<class U>
void Enqueue(Node<U> *&start, U value){
    Node<U> *temp = start;
    while(temp->nextPtr != nullptr)
    temp = temp -> nextPtr;
    temp -> nextPtr = new Node<U>(value);
}

template<class U>
U Dequeue(Node<U> *&start){
    Node<U> *temp = start;
    if(temp == nullptr){
        cout << "Empty list!" << endl;
        exit(-1);
    }else{
        U res = temp->val;
        start = temp->nextPtr;
        delete temp;
        return res;
    }
}

int main(){
    Node<int> *root = new Node<int>(1);
    Enqueue(root, 2);
    Dequeue(root);
    Enqueue(root, 3);
    Dequeue(root);
    Enqueue(root, 4);
    Enqueue(root, 5);
    Dequeue(root);
    (*root).showlist();
    return 0;
}