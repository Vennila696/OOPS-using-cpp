#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string studentName;
    int score;
public:
    Student(string n, int s) : studentName(n), score(s) {}
    void setScore(int newScore) { score = newScore; }
    int getScore() const { return score; }
    void display() const {
        cout << "Student Name: " << studentName << "\nScore: " << score << endl;
    }
};
void updateScore(Student &s, int newScore) {
    s.setScore(newScore);
}
int main() {
    Student student1("Vennila", 82);
    cout << "Before update:" << endl;
    student1.display();
    updateScore(student1, 95);
    cout << "After update:" << endl;
    student1.display();
    return 0;
}
