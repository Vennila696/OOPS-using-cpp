#include <iostream>
using namespace std;
class Employee {
public:
    void work() {
        cout << "Employee working.";
    }
protected:
    void calculate_salary() {
        cout << "\nCalculating Salary...";
    }
};
class Student {
private:
    void study() {
        cout << "\nStudent studying.";
    }
protected:
    void s() {
        study();
    }
};
class Intern : public Employee, private Student {
public:
    void dowork() {
        work();
        calculate_salary();
        s();
    }
};
int main() {
    Intern i;
    i.dowork();
    return 0;
}
