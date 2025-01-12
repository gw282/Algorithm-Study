#include <iostream>

using namespace std;

int n, t;
int a[1000];

int main() {
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int cnt = 0, ans = 0;
    for(int i=0;i<n;i++) {
        if(a[i] <= t) {
            ans = max(cnt, ans);
            cnt = 0;
        } else if(i==0 || a[i] <= a[i-1]) {
            ans = max(cnt, ans);
            cnt = 1;
        }
        else cnt++;
    }

    cout << max(cnt, ans);
    return 0;
}