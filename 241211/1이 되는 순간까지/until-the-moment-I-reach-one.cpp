#include <iostream>
using namespace std;

int func(int n, int count) {
    if(n == 1) return count;
    if(n%2 == 0) return func(n/2, count+1);
    else return func(n/3, count+1);
}
int main() {
    int n;
    cin >> n;

    cout << func(n,0);
    return 0;
}