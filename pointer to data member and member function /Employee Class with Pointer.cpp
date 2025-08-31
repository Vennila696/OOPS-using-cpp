#include <iostream>
#include <cstring>
using namespace std;
class Employee {
private:
    char name[50];
    int age;
    double salary;
public:
    void setData(const char* n, int a, double s) {
        strcpy(this->name, n);
        this->age = a;
        this->salary = s;
    }
    void display() {
        cout << "Name: " << this->name 
             << ", Age: " << this->age 
             << ", Salary: Rs." << this->salary << "\n";
    }
};
int main() {
    Employee emp;
    Employee* empPtr = &emp;
    empPtr->setData("Amu", 25, 70000);
    empPtr->display();
    return 0;
}
