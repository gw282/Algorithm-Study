#include <iostream>
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int n, ans = 0;

int arr[102][102];

bool border(int nx, int ny) {
    if(nx < 0 || ny < 0 || nx >= n || ny >= n) return false;
    return true;
}

int main() {
    cin >> n;
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            int cnt = 0;

            for(int k=0;k<4;k++) {
                int nx = j + dx[k];
                int ny = i + dy[k];
                if(border(nx,ny) && arr[nx][ny] == 1) cnt++;
            }
            
            if(cnt >=3) ans++;
        }
    }

    cout << ans;
    return 0;
}