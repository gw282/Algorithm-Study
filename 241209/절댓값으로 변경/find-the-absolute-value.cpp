#include <iostream>
using namespace std;

void change(int arr[], int n) {
    for(int i=0;i<n;i++) {
        if(arr[i]<0) {
            arr[i] = abs(arr[i]);
        }
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    change(arr,n);

    for(int i=0;i<n;i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}