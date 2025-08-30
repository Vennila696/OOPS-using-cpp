#include <iostream>
using namespace std;

int main() {
    int a[3][3], b[3][3], c[3][3];

    cout << "Enter elements of first 3x3 matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    cout << "Enter elements of second 3x3 matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> b[i][j];

    // Multiplication
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Resultant Matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << c[i][j] << "\t";
        cout << endl;
    }
    return 0;
}
