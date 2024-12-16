#include <iostream>
#include <algorithm>
using namespace std;

int arr[1002];
int main() {
    int n;
    cin >> n;

    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    sort(arr,arr+n);

    int mx = 0;

    for(int i=0;i<n/2;i++) {
        int num = arr[i] + arr[n-1-i];
        mx = max(mx, num);
    }

    cout << mx;
    return 0;
}