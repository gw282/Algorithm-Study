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
        if(i==0 || (arr[i] * arr[i-1] < 0)) {
            ans = max(cnt, ans);
            cnt = 1;
        } else cnt++;
    }

    cout << max(cnt, ans);

    return 0;
}