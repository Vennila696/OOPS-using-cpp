#include <iostream>
using namespace std;
class Counter {
private:
    int value;
public:
    Counter(int v = 0) : value(v) {}
    void display() const {
        cout << "Value: " << value << endl;
    }
    friend Counter operator++(Counter &c);       // Prefix ++
    friend Counter operator++(Counter &c, int);  // Postfix ++
    friend Counter operator--(Counter &c);       // Prefix --
    friend Counter operator--(Counter &c, int);  // Postfix --
};
Counter operator++(Counter &c) {  // Prefix increment
    ++c.value;
    return c;
}
Counter operator++(Counter &c, int) {  // Postfix increment
    Counter temp = c;
    c.value++;
    return temp;
Counter operator--(Counter &c) {  // Prefix decrement
    --c.value;
    return c;
}
Counter operator--(Counter &c, int) {  // Postfix decrement
    Counter temp = c;
    c.value--;
    return temp;
}
int main() {
    Counter c1(5);
    cout << "Initial value:\n";
    c1.display();
    cout << "After prefix increment (++c1):\n";
    ++c1;
    c1.display();
    cout << "After postfix increment (c1++):\n";
    c1++;
    c1.display();
    cout << "After prefix decrement (--c1):\n";
    --c1;
    c1.display();
    cout << "After postfix decrement (c1--):\n";
    c1--;
    c1.display();
    return 0;
}
