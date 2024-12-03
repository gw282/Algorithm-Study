#include <iostream>
using namespace std;

int GCD(int n, int m) {
    int a = n, b = m;
    if(a==b || a%b == 0 ) {
        return b;
    }
    else return GCD(b, a%b);

}

int main() {
    int n, m;

    cin >> n>> m;

    cout << n * m / GCD(n,m);
    return 0;
}