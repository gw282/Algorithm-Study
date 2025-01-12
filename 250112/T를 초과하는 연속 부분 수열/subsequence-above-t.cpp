#include <iostream>
#include <algorithm>

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
            cnt++;
            ans = max(ans, cnt);
        } else {
            cnt = 0; 
        }
    }

    ans = max(ans, cnt);
    cout << ans;
    return 0;
}
