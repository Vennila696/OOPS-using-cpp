#include <iostream>
using namespace std;
int volume(int length = 5, int width = 5, int height = 10) {
    return length * width * height;
}
int main() {
    cout << "Default volume: " << volume() << endl;
    cout << "Volume with length=7: " << volume(7) << endl;
    cout << "Volume with length=7, width=8: " << volume(7, 8) << endl;
    cout << "Volume with length=7, width=8, height=12: " << volume(7, 8, 12) << endl;
    return 0;
}
