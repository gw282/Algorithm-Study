#include <iostream>
#include <algorithm>
using namespace std;

int arr[1002];
int main() {
    int k, n;
    cin >> k >> n;

    for(int i=0;i<k;i++) {
        cin >> arr[i];
    }

    sort(arr,arr+k);
    cout << arr[n-1];
    return 0;
}