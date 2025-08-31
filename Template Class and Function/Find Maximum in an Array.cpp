#include <iostream>
using namespace std;
template <class T>
class ArrayOps {
private:
    T* arr;
    int size;
public:
    ArrayOps(T a[], int s) {
        arr = a;
        size = s;
    }
    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    T Max() {
        T max = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > max)
                max = arr[i];
        }
        return max;
    }
};
int main() {
    int intArr[] = {10, 25, 7, 30, 15};
    ArrayOps<int> intOps(intArr, 5);
    intOps.display();
    cout << "Max element (int): " << intOps.Max() << endl;
    float floatArr[] = {3.5, 7.8, 1.2, 9.6};
    ArrayOps<float> floatOps(floatArr, 4);
    floatOps.display();
    cout << "Max element (float): " << floatOps.Max() << endl;
    return 0;
}
