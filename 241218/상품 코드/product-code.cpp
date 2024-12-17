#include <iostream>
#include <string>
using namespace std;

class Product {
    public:
        string name;  // 상품명
        int code;     // 상품 코드

        // Constructor to initialize name and code
        Product(string name, int code) {
            this->name = name;
            this->code = code;
        }
};

int main() {
    // Create a Product object with the hardcoded values
    Product product1("codetree", 50);

    // Variables to hold user input
    string name;
    int code;

    // Input: 상품명과 상품코드
    cin >> name >> code;

    // Create another Product object with user input values
    Product product2(name, code);

    // Output both products in the required format
    cout << "product " << product1.code << " is " << product1.name << endl;
    cout << "product " << product2.code << " is " << product2.name << endl;

    return 0;
}
