#include <iostream>
using namespace std;
int main() {
    int arr[5], index;
    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter index to access: ";
    cin >> index;
    try {
        if (index < 0 || index >= 5)
            throw "Index out of bounds.";
        cout << "Value at index " << index << ": " << arr[index] << endl;
    }
    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }
    return 0;
}
