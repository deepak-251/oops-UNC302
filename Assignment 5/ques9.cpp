#include <iostream>
using namespace std;

// base class
class vehicle {
protected:
    string company;
    string modelName;
    int manufactureYear;

public:
    vehicle(string mk, string md, int y) {
        company = mk;
        modelName = md;
        manufactureYear = y;
    }
};

// intermediate class
class truck : public vehicle {
protected:
    int loadCapacity;

public:
    truck(string mk, string md, int y, int lc)
        : vehicle(mk, md, y) {
        loadCapacity = lc;
    }
};

// derived class
class refrigeratedtruck : public truck {
    int tempControl;

public:
    refrigeratedtruck(string mk, string md, int y, int lc, int tc)
        : truck(mk, md, y, lc) {
        tempControl = tc;
    }

    void ShowTruckDetails() {
        cout << "company: " << company << endl;
        cout << "model: " << modelName << endl;
        cout << "year: " << manufactureYear << endl;
        cout << "load capacity: " << loadCapacity << " kg" << endl;
        cout << "temperature control: " << tempControl << " C" << endl;
    }
};

int main() {
    cout<<"Deepak Kumar 1024150071"<<endl;
    refrigeratedtruck rt1("mahindra", "cargoX", 2023, 1200, -10);
    rt1.ShowTruckDetails();

    return 0;
}