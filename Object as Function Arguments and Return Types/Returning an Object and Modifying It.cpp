#include <iostream>
using namespace std;
class Counter {
private:
    int count;
public:
    Counter(int c = 0) : count(c) {}

    void increment() {
        count++;
    }
    void display() const {
        cout << "Count: " << count << endl;
    }
};
Counter createCounter() {
    return Counter(5);
}
int main() {
    Counter c = createCounter();
    cout << "Initial Count: ";
    c.display();
    c.increment();
    cout << "Updated Count: ";
    c.display();
    return 0;
}
