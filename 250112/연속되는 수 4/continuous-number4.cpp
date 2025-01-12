#include <iostream>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int cnt = 0, ans = 0;
    for(int i=0;i<N;i++) {
        if(i==0 || arr[i-1] >= arr[i]) {
            ans = max(ans, cnt);
            cnt = 1;
        } else cnt++;
    }

    ans = max(ans, cnt);

    cout << ans;
    return 0;
}