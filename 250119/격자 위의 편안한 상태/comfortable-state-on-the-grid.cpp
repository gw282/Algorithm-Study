#include <iostream>
using namespace std;

int n, m, r,c;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int arr[102][102];

bool border(int nx, int ny) {
    if(nx < 1 || ny < 1 || nx > m || ny > n) return false;
    return true;
}

int main() {
    cin >> n >> m;

    for(int i=1;i<=m;i++) {
        cin >> r >> c;

        arr[r][c] = 1;
        int cnt = 0;

        for(int i=0;i<4;i++) {
            int nx = c + dx[i];
            int ny = r + dy[i];

            if(border(nx,ny) && arr[ny][nx]) cnt++;
        }
        if(cnt == 3) cout << 1 << '\n';
        else cout << 0 << '\n';
    }

    return 0;
}