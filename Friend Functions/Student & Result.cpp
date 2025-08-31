#include <iostream>
#include <cstring>
using namespace std;
class Student {
private:
    char name[50];
    int marks;
public:
    Student(const char n[], int m) {
        strcpy(name, n);
        marks = m;
    }
    friend class Result;
};
class Result {
public:
    void display(Student s) {
        cout << "Student Name: " << s.name << endl;
        cout << "Marks: " << s.marks << endl;
    }
};
int main() {
    Student s1("John", 85);
    Result r1;
    r1.display(s1);
    return 0;
}
