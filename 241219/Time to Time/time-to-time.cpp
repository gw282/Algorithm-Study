#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int min = 0;

    if(b>d) {
        min += (60 - b + d);
        min += 60 * (c-a-1);
    } else {
        min += (d - b);
        min += 60 * (c-a);
    }
    cout << min;
    return 0;
}