#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream alphabetFile("atoz.txt", ios::in | ios::out | ios::trunc);
    char letter = 'A';
    while(letter <= 'Z'){
        alphabetFile.put(letter);
        letter++;
    }
    
    alphabetFile.seekg(9, ios::beg);
    cout << "10th character is : " << (char)alphabetFile.get() << endl;
    
    alphabetFile.seekp(4, ios::beg);
    alphabetFile.put('e');
    
    alphabetFile.seekg(0, ios::end);    
    cout << "File size : " << alphabetFile.tellg() << endl;
    alphabetFile.close();

    fstream contentFile("data.txt", ios::in); 
    contentFile.seekg(9, ios::beg);
    cout << "Current position of the pointer : " << contentFile.tellg() << endl;

    char dataChar;
    while(contentFile.get(dataChar)){
        cout << dataChar;
    }
    contentFile.close();
    return 0; 
}