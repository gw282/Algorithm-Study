#include <iostream>
using namespace std;

int func(int n) {
    int m = n/10;
    int div = n%10;
    if(m == 0) return div * div;
    return func(m) + div * div;
}

int main() {
    int n;
    cin >> n;

    cout << func(n);
    return 0;
}