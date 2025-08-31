#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool isAnagram(string s1, string s2) {
    if (s1.size() != s2.size()) return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}
int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);
    cout << (isAnagram(str1, str2) ? "The strings are anagrams." : "The strings are not anagrams.") << endl;
    return 0;
}
