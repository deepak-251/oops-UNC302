#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream output("NUM.txt", ios::out);
    for(int val = 1; val <= 200; val++){
        output << val << ' ';
    }
    output.close();
    return 0;
}