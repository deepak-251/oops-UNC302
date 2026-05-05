#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream sourceStream;
    sourceStream.open("NOTES.txt");
    ofstream targetStream;
    targetStream.open("NOTES-copy.txt", ios::out);
    
    char buffer;
    while(sourceStream.get(buffer)){
        targetStream.put(buffer);
    }
    
    sourceStream.close();
    targetStream.close();
    return 0;
}