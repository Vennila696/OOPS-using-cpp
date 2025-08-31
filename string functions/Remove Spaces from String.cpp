#include <iostream>
#include <string>
using namespace std;
string removeSpaces(string str) {
    string result;
    for (char c : str) {
        if (c != ' ') result += c;
    }
    return result;
}
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "String without spaces: " << removeSpaces(input) << endl;
    return 0;
}
