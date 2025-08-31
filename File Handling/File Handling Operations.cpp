#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
void displayContent() {
    ifstream file("data.txt");
    string line;
    if (!file) {
        cout << "File not found!\n";
        return;
    }
    while (getline(file, line)) cout << line << endl;
    file.close();
}
void countStats() {
    ifstream file("data.txt");
    if (!file) {
        cout << "File not found!\n";
        return;
    }
    string line, word;
    int chars = 0, words = 0, lines = 0;
    while (getline(file, line)) {
        chars += line.length();
        lines++;
        stringstream ss(line);
        while (ss >> word) words++;
    }
    cout << "Characters: " << chars
         << "\nWords: " << words
         << "\nLines: " << lines << endl;
    file.close();
}
void searchWord() {
    ifstream file("data.txt");
    if (!file) {
        cout << "File not found!\n";
        return;
    }
    string word, target;
    bool found = false;
    cout << "Enter word to search: ";
    cin >> target;
    while (file >> word) {
        if (word == target) {
            found = true;
            break;
        }
    }
    cout << (found ? "Word found.\n" : "Word not found.\n");
    file.close();
}
void copyFile() {
    ifstream in("data.txt");
    if (!in) {
        cout << "Source file not found!\n";
        return;
    }
    ofstream out("copy.txt");
    string line;
    while (getline(in, line)) out << line << endl;
    cout << "Copied to copy.txt\n";
    in.close();
    out.close();
}
int main() {
    int choice;
    do {
        cout << "\n1. Display Content\n2. Count Chars/Words/Lines\n3. Search Word\n4. Copy File\n5. Exit\nChoice: ";
        cin >> choice;
        switch (choice) {
            case 1: displayContent(); break;
            case 2: countStats(); break;
            case 3: searchWord(); break;
            case 4: copyFile(); break;
            case 5: break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 5);
    return 0;
}
