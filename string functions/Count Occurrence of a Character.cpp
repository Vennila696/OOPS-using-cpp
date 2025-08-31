#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    char target;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter a character to count: ";
    cin >> target;
    int count = 0;
    for (char c : str) {
        if (c == target) count++;
    }
    cout << "The character '" << target << "' appears " << count << " times." << endl;
    return 0;
}
