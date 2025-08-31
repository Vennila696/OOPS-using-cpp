#include <iostream>
#include <string>
using namespace std;
bool isBalanced(string str) {
    int round = 0, curly = 0, square = 0;
    for (char ch : str) {
        if (ch == '(') round++;
        else if (ch == ')') round--;
        else if (ch == '{') curly++;
        else if (ch == '}') curly--;
        else if (ch == '[') square++;
        else if (ch == ']') square--;
        if (round < 0 || curly < 0 || square < 0) return false;
    }
    return round == 0 && curly == 0 && square == 0;
}
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << (isBalanced(input) ? "The parentheses are balanced." : "The parentheses are not balanced.") << endl;
    return 0;
}
