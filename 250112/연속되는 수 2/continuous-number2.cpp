#include <iostream>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int cnt = 1, ans = 0;
    for(int i=0;i<N;i++) {
        if(i==0) continue;
        else if(arr[i] != arr[i-1]) {
            ans = max(cnt, ans);
            cnt = 1;
        } else cnt++;
    }
    
    ans = max(cnt, ans);

    cout << ans;
    return 0;
}