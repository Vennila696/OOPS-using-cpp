#include <iostream>
using namespace std;
class Tracker {
public:
    static int count;
    Tracker() { count++; }
    static void display() {
        cout << "The Number of objects created: " << count << endl;
    }
};
int Tracker::count = 0;
int main() {
    Tracker obj1, obj2, obj3, obj4, obj5;
    Tracker::display();
    return 0;
}
