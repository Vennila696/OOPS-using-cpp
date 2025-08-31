#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
string toUpper(string s) {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    return s;
}
string toLower(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}
string reverseString(string s) {
    reverse(s.begin(), s.end());
    return s;
}
int main() {
    char str1[30] = "Hello";
    char str2[30] = " World";
    cout << "String Compare: " << strcmp(str1, str2) << endl;
    strcat(str1, str2);
    cout << "String Concatenate: " << str1 << endl;
    cout << "String Substring (check str2 in str1): " << (strstr(str1, str2) ? "Found" : "Not Found") << endl;
    cout << "String Length str1 after concatenate: " << strlen(str1) << endl;
    string s1 = str1;
    cout << "String Uppercase: " << toUpper(s1) << endl;
    cout << "String Lowercase: " << toLower(s1) << endl;
    cout << "String Reverse: " << reverseString(s1) << endl;
    strcpy(str1, str2);
    cout << "String Copied: " << str1 << endl;
    cout << "Last occurrence of 'l': " << (strrchr(str1, 'l') ? strrchr(str1, 'l') : "Not Found") << endl;
    cout << "String matching length (strspn): " << strspn(str1, str2) << endl;
    return 0;
}
