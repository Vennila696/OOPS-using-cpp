#include <iostream>
#include <cstring>
using namespace std;
class Person {
private:
    char name[50];
    int age;
public:
    Person(const char* n, int a) {
        strcpy(name, n);
        age = a;
    }
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main() {
    Person person1("vennila", 18);
    person1.displayDetails();
    return 0;
}
