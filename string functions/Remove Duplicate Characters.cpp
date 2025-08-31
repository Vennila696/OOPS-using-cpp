#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
string removeDuplicates(string s) {
    unordered_set<char> seen;
    string result;
    for (char c : s) {
        if (!seen.count(c)) {
            result += c;
            seen.insert(c);
        }
    }
    return result;
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "String after removing duplicates: " << removeDuplicates(str) << endl;
    return 0;
}
