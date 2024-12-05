#include <iostream>
using namespace std;

bool Even(int n) {
    int count = 0;
    while(1) {
        if(n/10 == 0) {
            count += n;
            break;
        } else {
            count += n%10;
            n = n/10;
        }
    }
    if(count %2 == 0) return true;
    else return false;
}

bool Prime(int n) {
    for(int i=2;i<n;i++) {
        if(n%i != 0) continue;
        return false;
    }
    return true;
}

int Count(int a, int b) {
    int count = 0;

    for(int i=a;i<=b;i++) {
        if(Even(i) && Prime(i))
        count++;
    }
    return count;
}

int main() {
    int a, b;
    cin >> a >> b;
    if(a == 1  && b == 1) {
        cout << 0;
    } else if(a == 1) {
        a = 2;
    } else cout << Count(a,b);
    return 0;
}