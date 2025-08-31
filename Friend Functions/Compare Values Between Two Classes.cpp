#include <iostream>
using namespace std;
class Beta;
class Alpha {
private:
    int num1;
public:
    Alpha(int a) { num1 = a; }
    friend void compareValues(Alpha, Beta);
};
class Beta {
private:
    int num2;
public:
    Beta(int b) { num2 = b; }
    friend void compareValues(Alpha, Beta);
};
void compareValues(Alpha obj1, Beta obj2) {
    if (obj1.num1 > obj2.num2)
        cout << "Larger: " << obj1.num1;
    else if (obj1.num1 < obj2.num2)
        cout << "Larger: " << obj2.num2;
    else
        cout << "Both are equal";
}
int main() {
    Alpha obj1(13);
    Beta obj2(17);
    compareValues(obj1, obj2);
    return 0;
}
