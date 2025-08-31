#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Student {
    string name;
    int rollNo;
    float marks;
};
void addStudent() {
    ofstream file("student.txt", ios::app);
    Student s;
    char choice;
    do {
        cout << "Enter Name: ";
        cin >> s.name;
        cout << "Enter Roll No: ";
        cin >> s.rollNo;
        cout << "Enter Marks: ";
        cin >> s.marks;
        file << s.name << " " << s.rollNo << " " << s.marks << endl;
        cout << "Add another student? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    file.close();
}
void displayStudents() {
    ifstream file("student.txt");
    Student s;
    if (!file) {
        cout << "File not found!\n";
        return;
    }
    cout << "\nStudent Records:\n";
    while (file >> s.name >> s.rollNo >> s.marks) {
        cout << "Name: " << s.name
             << ", Roll No: " << s.rollNo
             << ", Marks: " << s.marks << endl;
    }
    file.close();
}
void appendStudent() {
    ofstream file("student.txt", ios::app);
    Student s;
    cout << "Enter Name: ";
    cin >> s.name;
    cout << "Enter Roll No: ";
    cin >> s.rollNo;
    cout << "Enter Marks: ";
    cin >> s.marks;
    file << s.name << " " << s.rollNo << " " << s.marks << endl;
    file.close();
}
void searchStudent() {
    ifstream file("student.txt");
    Student s;
    int roll;
    bool found = false;
    cout << "Enter Roll No to search: ";
    cin >> roll;
    while (file >> s.name >> s.rollNo >> s.marks) {
        if (s.rollNo == roll) {
            cout << "Record found: "
                 << "Name: " << s.name
                 << ", Roll No: " << s.rollNo
                 << ", Marks: " << s.marks << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Student with Roll No " << roll << " not found.\n";
    }
    file.close();
}
void modifyMarks() {
    ifstream file("student.txt");
    ofstream temp("temp.txt");
    Student s;
    int roll;
    float newMarks;
    bool found = false;
    cout << "Enter Roll No to modify marks: ";
    cin >> roll;
    while (file >> s.name >> s.rollNo >> s.marks) {
        if (s.rollNo == roll) {
            cout << "Enter new marks: ";
            cin >> newMarks;
            s.marks = newMarks;
            found = true;
        }
        temp << s.name << " " << s.rollNo << " " << s.marks << endl;
    }
    file.close();
    temp.close();
    remove("student.txt");
    rename("temp.txt", "student.txt");
    if (found) cout << "Marks updated successfully.\n";
    else cout << "Student with Roll No " << roll << " not found.\n";
}
int main() {
    int choice;
    do {
        cout << "\n--- Student Record System ---\n";
        cout << "1. Add new student records\n";
        cout << "2. Display all student records\n";
        cout << "3. Append a new student record\n";
        cout << "4. Search student by Roll No\n";
        cout << "5. Modify marks by Roll No\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: appendStudent(); break;
            case 4: searchStudent(); break;
            case 5: modifyMarks(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 6);
    return 0;
}
