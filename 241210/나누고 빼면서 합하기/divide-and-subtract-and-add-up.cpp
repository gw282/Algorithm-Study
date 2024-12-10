#include <iostream>
using namespace std;

int m, n;
int arr[100];

int count_num() {
    int cnt = 0;
    while(m != 1) {
        cnt += arr[m];
        if(m %2 == 0) m /= 2;
        else m -= 1;
    }
    cnt += arr[1];
    return cnt;
}

int main() {
    cin >> n >> m;

    for(int i=1;i<=m;i++) {
        cin >> arr[i];
    }

    cout << count_num();
    return 0;
}