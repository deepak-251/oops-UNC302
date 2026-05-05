#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char text[20];
    cout << "Enter the string : ";
    char inputChar;
    int idx = 0;
    
    while(cin >> inputChar && idx < 20){
        text[idx++] = inputChar;
    }

    fstream storage("stringFile.txt", ios::in | ios::out | ios::trunc);
    storage.write(text, 20);
    storage.close();
    
    return 0;
}