#include <iostream>
#include <cstring>
using namespace std;
class Book {
private:
    char title[100];
    char author[100];
    float price;
public:
    Book() {
        strcpy(title, "");
        strcpy(author, "");
        price = 0.0;
    }
    Book(const char* t, const char* a, float p) {
        strcpy(title, t);
        strcpy(author, a);
        price = p;
    }
    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};
int main() {
    Book book1;
    book1.displayDetails();
    cout << endl;
    Book book2("Wings of Fire", "Dr. A.P.J. Abdul Kalam", 350.00);
    book2.displayDetails();
    return 0;
}
