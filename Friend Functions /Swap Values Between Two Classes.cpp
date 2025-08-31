#include <iostream>
using namespace std;
class Second;
class First {
private:
    int num1;
public:
    First(int a) { num1 = a; }
    friend void swapValues(First &, Second &);
    void display() { cout << "First: " << num1 << endl; }
};
class Second {
private:
    int num2;
public:
    Second(int b) { num2 = b; }
    friend void swapValues(First &, Second &);
    void display() { cout << "Second: " << num2 << endl; }
};
void swapValues(First &obj1, Second &obj2) {
    int temp = obj1.num1;
    obj1.num1 = obj2.num2;
    obj2.num2 = temp;
}
int main() {
    First obj1(11);
    Second obj2(24);
    cout << "Before Swap:" << endl;
    obj1.display();
    obj2.display();
    swapValues(obj1, obj2);
    cout << "\nAfter Swap:" << endl;
    obj1.display();
    obj2.display();
    return 0;
}
