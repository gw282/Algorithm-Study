#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    int cnt = 0;
    if (a < 11 || (a == 11 && b < 11) || (a == 11 && b == 11 && c < 11)) {
    cout << -1; return 0;
    }

    if(c < 11) {
        cnt += (49 + c);
        b -= 1;
    } else {
        cnt += (c - 11);
    }

    if(b < 11) {
        cnt += (13 + b) * 60;
        a -= 1;
    } else {
        cnt += (b -11) * 60;
    }

    cnt += (a - 11) * 24 * 60;

    cout << cnt;

    return 0;
}