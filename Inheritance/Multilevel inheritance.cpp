#include <iostream>
using namespace std;
class Animal {
protected:
    void makesound() {
        cout << "Some Sound";
    }
};
class Mammal : protected Animal {
public:
    void showtype() {
        cout << "\nMammal";
    }
    void makesound() {
        cout << "\nMammal Sound";
    }
};
class Dog : public Mammal {
public:
    void makesound() {
        cout << "\nBark.";
    }
};
int main() {
    Dog d;
    d.showtype();
    d.makesound();
    return 0;
}
