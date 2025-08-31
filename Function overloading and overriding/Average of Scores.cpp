#include <iostream>
using namespace std;
float findAverage(float a, float b) {
    return (a + b) / 2;
}
float findAverage(float a, float b, float c) {
    return (a + b + c) / 3;
}
int main() {
    int score1, score2, score3;
    cout << "Enter score 1: ";
    cin >> score1;
    cout << "Enter score 2: ";
    cin >> score2;
    cout << "Enter score 3: ";
    cin >> score3;
    cout << "Average of two scores: " << findAverage(score1, score2) << endl;
    cout << "Average of three scores: " << findAverage(score1, score2, score3) << endl;
    return 0;
}
