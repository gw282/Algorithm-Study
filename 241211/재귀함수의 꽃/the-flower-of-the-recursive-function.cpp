#include <iostream>
using namespace std;

int n;

void func(int n) {
    if(n==0) return;
    cout << n << ' ';
    func(n-1);
}

void func2(int m) {
    if(m > n) return;
    cout << m << ' ';
    func2(m+1); 
}

int main() {
    cin >> n;
    func(n);
    func2(1);
    return 0;
}