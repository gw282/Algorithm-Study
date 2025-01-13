#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
char d[1000];
int t[1000];
char d2[1000];
int t2[1000];

int locA[2000002];
int locB[2000002];

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

    locA[0] = 0;
    locB[0] = 0;

    // A의 위치 추적
    int time = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < t[i]; j++) {
            time++;
            if(d[i] == 'L') {
                locA[time] = locA[time-1] - 1;
            } else {
                locA[time] = locA[time-1] + 1;
            }
        }
    }

    // B의 위치 추적
    time = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < t2[i]; j++) {
            time++;
            if(d2[i] == 'L') {
                locB[time] = locB[time-1] - 1;
            } else {
                locB[time] = locB[time-1] + 1;
            }
        }
    }

    int maxTime = max(sumA, sumB);
    for(int i = sumA + 1; i <= maxTime; i++) {
        locA[i] = locA[sumA];
    }

    for(int i = sumB + 1; i <= maxTime; i++) {
        locB[i] = locB[sumB];
    }

    for(int i = 1; i <= maxTime; i++) {
        if(locA[i] == locB[i]) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    
    return 0;
}
