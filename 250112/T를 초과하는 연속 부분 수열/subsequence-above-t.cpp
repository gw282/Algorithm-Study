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
    for (int i = 0; i < n; i++) {
        if (a[i] > t) {
            if (i == 0 || a[i] > a[i-1]) {
                cnt++;
            } else {
                ans = max(cnt, ans); 
                cnt = 1;
            }
        } else {
            ans = max(cnt, ans);
            cnt = 0;
        }
    }

    ans = max(cnt, ans);
    cout << ans;
    return 0;
}
