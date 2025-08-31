#include <iostream>
using namespace std;
class Vehicle {
    int year;
protected:
    string model;
public:
    string brand;
    void get() {
        cout << "Enter the car brand: ";
        cin >> brand;
        cout << "Enter the car model: ";
        cin >> model;
        cout << "Enter the year of the car: ";
        cin >> year;
    }
    int get_y() {
        return year;
    }
    void showdetails() {
        cout << "\nBrand: " << brand;
        cout << "\nModel: " << model;
    }
};
class Car : public Vehicle {
    int doors;
public:
    void get_dy() {
        cout << "Enter the number of doors: ";
        cin >> doors;
    }
    void showdetails() {
        Vehicle::showdetails();
        cout << "\nYear: " << get_y();
        cout << "\nNumber of doors: " << doors << endl;
    }
};
int main() {
    Car c;
    c.get();
    c.get_dy();
    c.showdetails();
    return 0;
}
