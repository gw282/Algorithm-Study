#include <iostream>
using namespace std;

void func(int n) {
    if(n == 1) return;

    while(n--) {
        cout << "HelloWorld" << '\n';
    }
}

int main() {
    int n;
    cin >> n;
    func(n);
    return 0;
}