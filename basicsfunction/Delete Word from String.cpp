#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200], word[50], result[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);
    cout << "Enter the word to delete: ";
    cin >> word;

    int i = 0, k = 0;
    while (str[i] != '\0') {
        bool match = true;
        int j = 0;
        while (word[j] != '\0' && str[i + j] == word[j]) j++;

        if (word[j] == '\0' && (str[i + j] == ' ' || str[i + j] == '\0')) {
            i += j;
            if (str[i] == ' ') i++;
            match = false;
        }

        if (match) result[k++] = str[i++];
    }

    result[k] = '\0';
    cout << "String after deletion: " << result << endl;
    return 0;
}
