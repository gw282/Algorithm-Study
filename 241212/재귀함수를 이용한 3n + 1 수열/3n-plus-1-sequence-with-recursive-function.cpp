#include <iostream>
using namespace std;

int func(int n) {
    if(n == 1) return 0;
    if(n % 2 == 1) return func(n*3+1)+1;
    return func(n/2)+1;
}

int main() {
    int n;
    cin >> n;

    cout << func(n);
    return 0;
}