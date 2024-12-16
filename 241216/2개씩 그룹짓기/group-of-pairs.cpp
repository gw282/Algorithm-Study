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

    int mn = arr[0] + arr[n-1];

    for(int i=1;i<n/2-1;i++) {
        int num = arr[i] + arr[n-1-i];
        mn = min(mn, num);
    }

    cout << mn;
    return 0;
}