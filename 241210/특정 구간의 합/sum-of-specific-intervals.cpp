#include <iostream>
using namespace std;

int n,m;
int arr[101];

int func(int a1, int a2) {
    int count = 0;
    for(int i=a1;i<=a2;i++) {
        count += arr[i];
    }
    return count;
}

int main() {
    cin >> n >> m;

    for(int i=1;i<=n;i++) {
        cin >> arr[i];
    }

    int a1, a2;
    for(int i=1;i<=m;i++) {
        cin >> a1 >> a2;
        cout << func(a1,a2) << '\n';
    }

    return 0;
}