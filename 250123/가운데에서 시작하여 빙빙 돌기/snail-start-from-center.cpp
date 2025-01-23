#include <iostream>
using namespace std;

int dy[4] = {0,-1,0,1}; // 완 위 오 아
int dx[4] = {-1,0,1,0};

int n,x,y;
int a[102][102];

int main() {
    cin >> n;
    x = n, y = n;
    int x1 = 0, x2 = n+1;
    int y1 = 0, y2 = n+1;
    int dir = 0;
    int num = n * n;

    while(num >= 1) {
        a[y][x] = num--;

        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(ny >= y2 || ny <= y1 || nx >= x2 || nx <= x1) {
            dir = (dir + 1) % 4;

            if(dir == 0) x2--;
            else if(dir == 1) y2--;
            else if(dir == 2) x1++;
            else if(dir == 3) y1++;

            nx = x + dx[dir];
            ny = y + dy[dir];
        }

        x = nx, y = ny;
        // cout << ny << nx << '\n';
    }

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}