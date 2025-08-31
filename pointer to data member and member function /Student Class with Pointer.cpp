#include <iostream>
#include <cstring>
using namespace std;
class Student {
private:
    char name[50];
    int age;
    char grade;
public:
    void setData(const char* n, int a, char g) {
        strcpy(this->name, n);
        this->age = a;
        this->grade = g;
    }
    void display() {
        cout << "Name: " << this->name 
             << ", Age: " << this->age 
             << ", Grade: " << this->grade << "\n";
    }
};
int main() {
    Student student1, student2;
    Student* studentPtr;
    studentPtr = &student1;
    studentPtr->setData("Anu", 22, 'A');
    studentPtr->display();
    studentPtr = &student2;
    studentPtr->setData("Berlin", 17, 'B');
    studentPtr->display();
    return 0;
}
