#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string word) {
    int n = word.size();
    for (int i = 0; i < n / 2; i++) {
        if (word[i] != word[n - i - 1]) return false;
    }
    return true;
}
int main() {
    string word;
    cout << "Enter any word: ";
    cin >> word;
    cout << (isPalindrome(word) ? "The word is palindrome" : "The word is not palindrome") << endl;
    return 0;
}
