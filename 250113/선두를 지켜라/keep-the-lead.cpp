#include <iostream>
using namespace std;

long long locA[1000002];
long long locB[1000002];

int n, m;
int v, t;
bool overtake = true;
int ans = -1;
int main() {
    cin >> n >> m;

    int dis = 0;
    for(int i=0;i<n;i++) {
        cin >> v >> t;
        while(t--) {
            dis++;
            locA[dis] = locA[dis-1] + v;
        }
    }

    dis = 0;
    for(int i=0;i<m;i++) {
        cin >> v >> t;
        while(t--) {
            dis++;
            locB[dis] = locB[dis-1] + v;
        }
    }

    for(int i=1;i<=dis;i++) {
        if(locA[i] == locB[i]) continue;
        else if(locA[i] > locB[i] && ans == -1) {
            ans++; overtake = true;
        }
        else if(locA[i] < locB[i] && ans == -1) {
            ans++; overtake = false;
        }
        else if(locA[i] > locB[i] && overtake == false) {
            ans++; overtake = true;
        }
        else if(locA[i] < locB[i] && overtake == true) {
            ans++; overtake = false;
        }
    }

    cout << ans;
    return 0;
}