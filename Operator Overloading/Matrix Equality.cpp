#include <iostream>
using namespace std;
class Matrix {
private:
    int mat[2][2];
public:
    void input() {
        cout << "Enter 4 elements of the matrix:\n";
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> mat[i][j];
            }
        }
    }
    bool operator==(const Matrix &a) const {
        return (mat[0][0] == a.mat[0][0] && mat[0][1] == a.mat[0][1] &&
                mat[1][0] == a.mat[1][0] && mat[1][1] == a.mat[1][1]);
    }
    bool operator!=(const Matrix &a) const {
        return !(*this == a);
    }
    void display() const {
        cout << mat[0][0] << " " << mat[0][1] << endl;
        cout << mat[1][0] << " " << mat[1][1] << endl;
    }
};
int main() {
    Matrix m1, m2;
    cout << "Enter Matrix 1:\n";
    m1.input();
    cout << "Enter Matrix 2:\n";
    m2.input();
    cout << "Matrix 1:\n";
    m1.display();
    cout << "Matrix 2:\n";
    m2.display();
    if (m1 == m2)
        cout << "Matrix 1 is equal to Matrix 2\n";
    else
        cout << "Matrix 1 is not equal to Matrix 2\n";
    return 0;
}
