#include <iostream>
using namespace std;

int n;

void func(int m) {
    if(m == n) return;
    for(int i=0;i<m;i++) {
        cout << "*";
    }
    cout <<'\n';
    func(m+1);
}

int main() {
    cin >> n;
    func(1);
    return 0;
}