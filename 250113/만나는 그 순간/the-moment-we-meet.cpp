#include <iostream>

using namespace std;

int n, m;
char d[1000];
int t[1000];
char d2[1000];
int t2[1000];

int locA[1002];
int locB[1002];

int A = 0, B = 0, ans = -1;
int sumA = 0;
int sumB = 0;
int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> d[i] >> t[i];
        sumA += t[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> d2[i] >> t2[i];
        sumB += t2[i];
    }

    int mx = max(sumA, sumB);
    

    int cnt = 0, time = 0;
    for(int i=0;i<n;i++) {
        cnt = t[i];
        while(cnt--) {
            time = time + 1;
            if(d[i] == 'L') {
                locA[time] = locA[time-1] -1;
            } else {
                locA[time] = locA[time-1] +1;
            }
        }
    }

    cnt = 0, time = 0;
    for(int i=0;i<m;i++) {
        cnt = t2[i];
        while(cnt--) {
            time = time + 1;
            if(d2[i] == 'L') {
                locB[time] = locB[time-1] -1;
            } else {
                locB[time] = locB[time-1] +1;
            }
        }
    }

    if(sumA < sumB) {
        for(int i=sumA+1;i<=sumB;i++) {
            locA[i] = locA[sumA];
        }
    } else {
        for(int i=sumB+1;i<=sumA;i++) {
            locB[i] = locA[sumB];
        }
    }

    for(int i=1;i<=mx;i++) {
        if(locA[i] == locB[i]) {
            ans = i; break;
        }
    }
    cout << ans;
    
    return 0;
}