#include <iostream>
#include <string>
using namespace std;

class Product {
    public:
        string name;  // 상품명
        int code;     // 상품 코드

        Product(string name, int code) {
            this->name = name;
            this->code = code;
        }
};

int main() {
    Product product1("codetree", 50);

    string name;
    int code;

    cin >> name >> code;

    Product product2(name, code);

    cout << "product " << product1.code << " is " << product1.name << endl;
    cout << "product " << product2.code << " is " << product2.name << endl;

    return 0;
}
