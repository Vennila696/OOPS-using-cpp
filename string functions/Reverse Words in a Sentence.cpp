#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main() {
    string input;
    cout << "Enter the string: ";
    getline(cin, input);
    stringstream ss(input);
    vector<string> words;
    string word;
    while (ss >> word) {
        words.push_back(word);
    }
    cout << "Reversed words: ";
    for (int i = words.size() - 1; i >= 0; i--) {
        cout << words[i] << " ";
    }
    cout << endl;
    return 0;
}
