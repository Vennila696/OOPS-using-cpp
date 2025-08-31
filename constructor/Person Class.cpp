#include <iostream>
#include <cstring>
using namespace std;
class Person {
    char name[100];
    int age;
public:
    Person() {
        strcpy(name, "Unknown");
        age = 0;
    }
    Person(char a[], int b) {
        strcpy(name, a);
        age = b;
    }
    Person(const Person &p) {
        strcpy(name, p.name);
        age = p.age;
    }
    void display() {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};
int main() {
    Person P1;
    char a[100];
    int b;
    cout << "Enter your name: ";
    cin >> a;
    cout << "Enter your age: ";
    cin >> b;
    Person P2(a, b), P3(P2);
    P1.display();
    P2.display();
    P3.display();
    return 0;
}
