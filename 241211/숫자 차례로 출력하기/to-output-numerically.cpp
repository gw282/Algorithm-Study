#include <iostream>
using namespace std;

int n;

void func1(int i) {
    if(i > n) return;
    cout << i << ' ';
    func1(i+1);
}

void func2(int n) {
    if(n == 0) return;
    cout << n << ' ';
    func2(n-1);
}

int main() {
    cin >> n;

    func1(1);
    cout << '\n';
    func2(n);

    return 0;
}