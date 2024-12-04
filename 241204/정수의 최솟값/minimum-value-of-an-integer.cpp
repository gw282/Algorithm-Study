#include <iostream>
#include <algorithm>
using namespace std;

int minimum(int a, int b, int c) {
    int m;
    m = min(a,b);
    m = min(m,c);
    return m;
}
int main() {
    int a,b,c;

    cin >> a >> b >> c;

    cout << minimum(a,b,c);
    return 0;
}