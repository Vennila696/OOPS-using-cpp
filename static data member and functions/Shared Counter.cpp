#include <iostream>
#include <cstring>
using namespace std;
class Student {
public:
    char name[50];
    static int totalStudents;
    static void registeredStudent() {
        cout << totalStudents << endl;
    }
};
int Student::totalStudents = 0;
int main() {
    int choice = 0;
    Student s1;
    cout << "\nSelect your choice:\n";
    cout << "1. Register a student\n2. Exit\n";
    do {
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter the student name: ";
                cin >> s1.name;
                Student::totalStudents++;
                break;
            case 2:
                cout << "\nRegistration completed!!!\n";
                break;
            default:
                cout << "\nInvalid input";
                break;
        }
    } while (choice != 2);
    cout << "\nTotal number of students registered: ";
    Student::registeredStudent();
    return 0;
}
