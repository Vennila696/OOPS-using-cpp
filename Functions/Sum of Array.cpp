#include <iostream>
using namespace std;
int sumV(int arr[], int size) { 
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
        arr[i] = 0;  
    }
    return sum;
}
int sumR(int *arr, int size) { 
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
        arr[i] = 0;  
    }
    return sum;
}
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Sum by Value: " << sumV(arr1, size) << endl;
    cout << "Sum by Reference: " << sumR(arr2, size) << endl;
    return 0;
}
