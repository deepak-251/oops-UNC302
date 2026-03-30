#include <iostream>
using namespace std;

// speed class
class speedometer {
protected:
    int carSpeed;

public:
    speedometer(int s) {
        carSpeed = s;
    }
};

// fuel class
class fuelgauge {
protected:
    int fuelLevel;

public:
    fuelgauge(int f) {
        fuelLevel = f;
    }
};

// temperature class
class thermometer {
protected:
    int engineTemp;

public:
    thermometer(int t) {
        engineTemp = t;
    }
};

// multiple inheritance
class cardashboard : public speedometer, public fuelgauge, public thermometer {
public:
    cardashboard(int s, int f, int t)
        : speedometer(s), fuelgauge(f), thermometer(t) {}

    void ShowDashboard() {
        cout << "current speed: " << carSpeed << " km/h" << endl;
        cout << "fuel level: " << fuelLevel << "%" << endl;
        cout << "engine temperature: " << engineTemp << " C" << endl;
    }
};

int main() {
    cout<<"Deepak kumar 1024150071"<<endl;
    cardashboard car1(90, 60, 40);
    car1.ShowDashboard();

    return 0;
}