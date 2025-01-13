#include <iostream>
using namespace std;

int A[1000002];
int B[1000002];

int n, m;
int t;
char d;

int ans = 0;
int sumA = 0, sumB = 0;

int main() {
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        cin >> t >> d;
        while(t--) {
            sumA +=1;
            if(d == 'L') {
                A[sumA] = A[sumA-1] -1;
            } else {
                A[sumA] = A[sumA-1] +1;
            }
        }
    }

    for(int i=0;i<m;i++) {
        cin >> t >> d;
        while(t--) {
            sumB +=1;
            if(d == 'L') {
                B[sumB] = B[sumB-1] -1;
            } else {
                B[sumB] = B[sumB-1] +1;
            }
        }
    }

    int mx = max(sumA, sumB);

    if(sumA < sumB) {
        for(int i=sumA+1;i<=sumB;i++) {
            A[i] = A[i-1];
        }
    } else {
        for(int i=sumB+1;i<=sumA;i++) {
            B[i] = B[i-1];
        }
    }
    
    for(int i=1;i<=mx;i++) {
        if(A[i] == B[i]) {
            if(A[i-1] != B[i-1]) {
                ans++;
            }
        }
    }

    cout << ans;

    return 0;
}