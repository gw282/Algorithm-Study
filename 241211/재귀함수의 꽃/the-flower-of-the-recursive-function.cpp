#include <iostream>
using namespace std;

int n;

void func(int n) {
    if(n==0) return;

    cout << n << ' ';
    func(n-1);
    cout << n << ' ';
}

int main() {
    cin >> n;
    func(n);

    return 0;
}