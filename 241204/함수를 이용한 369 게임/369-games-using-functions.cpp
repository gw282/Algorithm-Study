#include <iostream>
using namespace std;

bool check(int n) {
    int m;
    while(n) {
        m = n % 10;
        if(m == 3 || m == 6 || m == 9) {
            return true;
        }
        n /= 10;
    }
    return false;
}

int game(int a, int b) {
    int count = 0;
    for(int i=a;i<=b;i++) {
        if(i % 3 == 0 || check(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int a,b;
    cin >> a >> b;

    cout << game(a,b);
    return 0;
}