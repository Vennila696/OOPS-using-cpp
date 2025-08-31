#include <iostream>
#include <string>
using namespace std;
bool isSubstring(const string &s1, const string &s2) {
    return s1.find(s2) != string::npos;
}
int main() {
    string str1, str2;
    cout << "Enter the main string: ";
    getline(cin, str1);
    cout << "Enter the substring to check: ";
    getline(cin, str2);
    cout << (isSubstring(str1, str2) ? "\"" + str2 + "\" is a substring of \"" + str1 + "\"" :
                                       "\"" + str2 + "\" is not a substring of \"" + str1 + "\"") << endl;
    return 0;
}
