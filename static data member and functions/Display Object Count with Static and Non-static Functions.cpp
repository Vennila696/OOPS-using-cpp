#include <iostream>
using namespace std;
class Car {
public:
    static int carCount;
    int carID;
    Car() { carID = 0; }
    void setCarID(int id) { carID = id; }
    static void incrementCarCount() { carCount++; }
};
int Car::carCount = 0;
int main() {
    Car c1, c2, c3;
    int IDs;
    cout << "Enter car id for car 1: ";
    cin >> IDs;
    c1.setCarID(IDs);
    Car::incrementCarCount();
    cout << "Enter car id for car 2: ";
    cin >> IDs;
    c2.setCarID(IDs);
    Car::incrementCarCount();
    cout << "Enter car id for car 3: ";
    cin >> IDs;
    c3.setCarID(IDs);
    Car::incrementCarCount();
    cout << "Total car count: " << Car::carCount << endl;
    cout << "Car IDs: " << c1.carID << ", " << c2.carID << ", " << c3.carID << endl;
    return 0;
}
