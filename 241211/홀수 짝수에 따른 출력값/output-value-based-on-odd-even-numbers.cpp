#include <iostream>
using namespace std;

int func(int n) {
    if(n == 1) return 1;
    if(n == 2) return 2;
    return n + func(n-2);

}

int main() {
    int n;
    cin >> n;

    cout << func(n);
    return 0;
}