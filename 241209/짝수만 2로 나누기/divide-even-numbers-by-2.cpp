#include <iostream>
using namespace std;

void Divide2(int n, int *arr) {
    for(int i=0;i<n;i++) {
        if(arr[i] % 2 == 0) arr[i] /= 2;
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    
    Divide2(n,arr);

    for(int i=0;i<n;i++) {
        cout<< arr[i] << ' ';
    }
    return 0;
}