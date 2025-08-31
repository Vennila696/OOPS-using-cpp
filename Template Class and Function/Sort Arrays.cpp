#include <iostream>
using namespace std;
template <class T>
void sortArray(T a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int m = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[m])
                m = j;
        }
        T t = a[i];
        a[i] = a[m];
        a[m] = t;
    }
}
template <class T>
void displayArray(T a[], int n) {
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}
int main() {
    int a[] = {5, 2, 9, 1, 5, 6};
    float b[] = {3.1, 2.4, 5.6, 1.0};
    char c[] = {'d', 'a', 'c', 'b'};
    int na = sizeof(a) / sizeof(a[0]);
    int nb = sizeof(b) / sizeof(b[0]);
    int nc = sizeof(c) / sizeof(c[0]);
    sortArray(a, na);
    sortArray(b, nb);
    sortArray(c, nc);
    cout << "Sorted Int: "; displayArray(a, na);
    cout << "Sorted Float: "; displayArray(b, nb);
    cout << "Sorted Char: "; displayArray(c, nc);
    return 0;
}
