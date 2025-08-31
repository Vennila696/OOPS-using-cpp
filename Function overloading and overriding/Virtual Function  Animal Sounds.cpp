#include <iostream>
using namespace std;
class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};
class Dog : public Animal {
public:
    void speak() override {
        cout << "Woof! Woof!" << endl;
    }
};
class Cat : public Animal {
public:
    void speak() override {
        cout << "Meow! Meow!" << endl;
    }
};
int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();
    a1->speak();
    a2->speak();
    delete a1;
    delete a2;
    return 0;
}
