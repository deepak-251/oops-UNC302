#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream inputSource("NOTES.txt");
    int tally = 0;
    char ch;

    while(inputSource.get(ch)){
        cout << ch;
        tally++;
    }
    inputSource.close();
    cout << "\nThere are " << tally << " characters in NOTES.txt" << endl;
    return 0;
}