#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream outStream("hello.txt", ios::trunc | ios::out | ios::in);
    string original = "Hello World", replacement = "C++  ";
    
    for(auto character : original){
        outStream.put(character);
        cout << "Current position of the pointer : " << outStream.tellp() << endl;
    }
    
    outStream.seekp(-5, ios::end);
    for(auto character : replacement){
        outStream.put(character);
    }
        
    return 0;
}