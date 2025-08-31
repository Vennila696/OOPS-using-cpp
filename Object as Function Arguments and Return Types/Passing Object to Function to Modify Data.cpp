#include <iostream>
#include <string>
using namespace std;
class Book {
public:
    string title;
    string author;
    Book(string t, string a) : title(t), author(a) {}
    void display() {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};
void updateTitle(Book &b, string newTitle) {
    b.title = newTitle;
}
int main() {
    Book myBook("David Thomas Explosion", "David Durai");
    cout << "Before update:" << endl;
    myBook.display();
    updateTitle(myBook, "Explosion World");
    cout << "After update:" << endl;
    myBook.display();
    return 0;
}
