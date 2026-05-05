#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class Record {
    int id;
    char name[30];

public:
    Record() : id(0) {
        strcpy(name, "");
    }
    
    Record(int i, const char* n) {
        id = i;
        strcpy(name, n);
    }

    void display() {
        cout << "ID: " << id << " | Name: " << name << endl;
    }
};

int main() {
    Record obj1(101, "ObjectOne");
    Record obj2;

    // Writing object to binary file
    ofstream outBin("data.dat", ios::binary);
    outBin.write((char*)&obj1, sizeof(obj1));
    outBin.close();

    // Reading object from binary file
    ifstream inBin("data.dat", ios::binary);
    inBin.read((char*)&obj2, sizeof(obj2));
    inBin.close();

    cout << "Data read from binary file:" << endl;
    obj2.display();

    return 0;
}