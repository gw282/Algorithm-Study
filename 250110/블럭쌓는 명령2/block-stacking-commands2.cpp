#include <iostream>
#include <algorithm>

using namespace std;

int N, K;
int A[100], B[100], res[102];

int main() {
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];

        for(int j=A[i];j<=B[i];j++) {
            res[j]++;
        }
    }

    int ans = 0;
    for(int i=0;i<=100;i++) {
        ans = max(ans, res[i]);
    }

    cout << ans;

    return 0;
}