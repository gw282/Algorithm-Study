#include <iostream>
using namespace std;

int n, m, v, t;
int sumA = 0, sumB = 0, mx = 0, ord = 0, ans = 0;
int A[1000002], B[1000002];

int main() {
    cin >> n >> m;

    for(int i=0;i<n;i++) {
        cin >> v >> t;
        for(int j=sumA+1;j<=sumA+t;j++) A[j] = A[j-1] + v;
        sumA += t;
    }

    for(int i=0;i<m;i++) {
        cin >> v >> t;
        for(int j=sumB+1;j<=sumB+t;j++) B[j] = B[j-1] + v;
        sumB += t;
    }


    if(sumA > sumB) {
        for(int i=sumB+1;i<=sumA;i++) B[i] = B[i-1];
    } else {
        for(int i=sumA+1;i<=sumB;i++) A[i] = A[i-1];
    }

    mx = max(sumA, sumB);

    for(int i=1;i<=mx;i++) {
        if(A[i] > B[i]) {
            if(ord !=1 || ord == 0) {
                ans++;
                ord = 1;
            }
        }
        else if(A[i] == B[i]) {
            if(ord !=2 || ord == 0) {
                ans++; 
                ord = 2;
            }
        }
        else if(A[i] < B[i]) {
            if(ord !=3 || ord == 0) {
                ans++;
                ord = 3;
            }
        }
    }

    cout << ans; 
    return 0;
}