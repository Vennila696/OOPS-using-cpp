#include <iostream>
using namespace std;
class Product {
    static int productCount;
public:
    Product() { productCount++; }
    static void getProductCount() {
        cout << "Total products created: " << productCount << endl;
    }
};
int Product::productCount = 0;
int main() {
    Product p1, p2, p3;
    Product::getProductCount();
    return 0;
}
