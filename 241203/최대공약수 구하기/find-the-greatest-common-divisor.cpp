#include <iostream>
using namespace std;

int GCD(int n, int m) {
    int a = n, b = m;
    int c = 0;
    if(a==b || a%b == 0 ) {
        return b;
    }
    else return GCD(b, a%b);

}

int main() {
    int n, m;

    cin >> n>> m;

    cout << GCD(n,m);
    return 0;
}