#include <iostream>

using namespace std;

int n;
int x[100];
char dir[100];
int cnt[2002];
int loc = 1000;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    for(int i=0;i<n;i++) {
        if(dir[i] == 'R') {
            for(int j=loc+1;j<=loc+x[i];j++) {
                cnt[j]++;
            }
            loc += x[i];
        } else {
            for(int j=loc+1-x[i];j<=loc;j++) {
                cnt[j]++;
            }
            loc -= x[i];
        }
    }

    int ans = 0;

    for(int i=0;i<2002;i++) {
        if(cnt[i] >= 2) ans++;
    }
    
    cout << ans;

    return 0;
}