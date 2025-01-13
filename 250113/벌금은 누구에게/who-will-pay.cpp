#include <iostream>
using namespace std;

int n,m,k;
int stu[101];
int ans =-1;
int main() {
    cin >> n >> m >> k;

    for(int i=0;i<m;i++) {
        int num;
        cin >> num;

        stu[num] += 1;

        if(stu[num] >= k && ans == -1) ans = num;
    }
    
    cout << ans;
    return 0;
}