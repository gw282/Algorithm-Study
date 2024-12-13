#include <iostream>
using namespace std;

int arr[11];

int func(int n) {
    if(n == 1) return arr[1];

    int a = arr[n];
    int b = arr[n-1];
    int c;
    
    while(b != 0) {
         c = b;
         b = a%b;
         a = c;
    }
    int res = arr[n]  *arr[n-1] / a;
    arr[n-1] = res;
    return func(n-1);
}

int main() {
    int n;
    cin >> n;

    for(int i=1;i<=n;i++) {
        cin >> arr[i];
    }

    cout << func(n);
    return 0;
}