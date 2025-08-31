#include <iostream>
using namespace std;
class ClassB;
class ClassA {
private:
    int numA;
public:
    ClassA(int a) { numA = a; }
    friend int sum(ClassA, ClassB);
};
class ClassB {
private:
    int numB;
public:
    ClassB(int b) { numB = b; }
    friend int sum(ClassA, ClassB);
};
int sum(ClassA objA, ClassB objB) {
    return objA.numA + objB.numB;
}
int main() {
    ClassA obj1(30);
    ClassB obj2(20);
    cout << "Sum: " << sum(obj1, obj2);
    return 0;
}
