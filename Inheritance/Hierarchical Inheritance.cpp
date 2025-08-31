#include <iostream>
using namespace std;
class Appliance {
    void turnon() {
        cout << "\nAppliance is on.";
    }
public:
    void t() {
        turnon();
    }
};
class WashingMachine : private Appliance {
public:
    void startMachine() {
        t();
    }
};
class Refrigerator : private Appliance {
public:
    void startCooling() {
        t();
    }
};
int main() {
    WashingMachine wm;
    Refrigerator r;
    wm.startMachine();
    r.startCooling();
    return 0;
}
