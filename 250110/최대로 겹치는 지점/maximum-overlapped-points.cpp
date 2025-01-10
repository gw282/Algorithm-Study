#include <iostream>
#include <algorithm>

using namespace std;

int n;
int x1[102], x2[102], res[102];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];

        for(int j=x1[i];j<=x2[i];j++) {
            res[j]++;
        }
    }

    int ans = 0;
    for(int i=0;i<102;i++) {
        ans = max(ans, res[i]);
    }

    cout << ans;

    return 0;
}