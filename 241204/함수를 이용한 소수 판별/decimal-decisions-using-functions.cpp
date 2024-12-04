#include <iostream>
using namespace std;

bool IsPrime(int n) {
    for(int i = 2; i < n; i++)
        if(n % i == 0)
            return false;

    return true;
}

int SumPrime(int a,int b) {
    int count = 0;
    for(int i=a;i<=b;i++) {
        if(IsPrime(i)) count += i;
    }
    return count;
}

int main() {
    int a,b;
    cin >> a >> b;
    if(a == 1 && b == 1) return 0;
    cout << SumPrime(a,b);
    return 0;
}