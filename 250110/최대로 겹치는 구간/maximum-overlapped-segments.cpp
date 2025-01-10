#include <iostream>
#include <algorithm>

using namespace std;

int n;
int x1[202], x2[202], res[202];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];

        for(int j=x1[i]+100;j<=x2[i]+100;j++) {
            res[j]++;
        }
    }

    int ans = 0;

    for(int i=0;i<=200;i++) {
        ans = max(ans, res[i]);
    }

    cout << ans;

    return 0;
}