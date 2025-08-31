#include <iostream>
using namespace std;
class ClassA {
    static int counter;
public:
    ClassA() { counter++; }
    static void displayCount() {
        cout << "Total objects created for ClassA: " << counter << endl;
    }
};
int ClassA::counter = 0;
class ClassB {
    static int counter;
public:
    ClassB() { counter++; }
    static void displayCount() {
        cout << "Total objects created for ClassB: " << counter << endl;
    }
};
int ClassB::counter = 0;
int main() {
    ClassA a1, a2;
    ClassB b1, b2, b3;
    ClassA::displayCount();
    ClassB::displayCount();
    return 0;
}
