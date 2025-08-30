#include <iostream>
using namespace std;

void insert(int arr[], int &n, int pos, int val) {
    if (pos < 0 || pos > n) {
        cout << "Invalid position!\n";
        return;
    }
    for (int i = n; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = val;
    n++;
}

void deleteElement(int arr[], int &n, int pos) {
    if (pos < 0 || pos >= n) {
        cout << "Invalid position!\n";
        return;
    }
    for (int i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
    n--;
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[100], n, choice, pos, val;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    do {
        cout << "\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter position: "; cin >> pos;
                cout << "Enter value: "; cin >> val;
                insert(arr, n, pos, val);
                break;
            case 2:
                cout << "Enter position: "; cin >> pos;
                deleteElement(arr, n, pos);
                break;
            case 3:
                display(arr, n);
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
