#include <iostream>
using namespace std;

int func(int n, int m) {
    if(n == 0) return m;
    int num;
    cin >> num;
    if(num > m) return func(n-1, num);
    return func(n-1, m);
}

int main() {
    int n, first;
    cin >> n >> first;

    cout << func(n-1, first);

    return 0;
}