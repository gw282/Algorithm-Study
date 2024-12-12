#include <iostream>
#include <algorithm>
using namespace std;

int arr[102];

int func(int n) {
    if(n == 0) return arr[0];
    return max(func(n-1), arr[n]);
}

int main() {
    int n;
    cin >> n;

    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    cout << func(n-1);
    return 0;
}