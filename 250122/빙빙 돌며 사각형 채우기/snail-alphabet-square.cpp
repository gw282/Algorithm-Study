#include <iostream>
using namespace std;

int dx[4] = {1, 0, -1, 0}; // 오른쪽, 아래, 왼쪽,위 
int dy[4] = {0, 1, 0, -1};
char text = 'A';
int main() {
    int n, m;
    cin >> n >> m;

    char a[102][102];
    int x = 1, y = 1, dir = 0, num = 1;
    int x1 = 0, y1 = 0, x2 = m + 1, y2 = n + 1;

    while (num <= n * m) {
        if(text == 'Z') {
            text = 'A' + 1;
        }
        a[y][x] = text++;
        num++;

        // 다음 위치 계산
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        // 경계 확인 및 방향 전환
        if (ny >= y2 || nx >= x2 || ny <= y1 || nx <= x1) {
            dir = (dir + 1) % 4; // 방향 전환
            if (dir == 0) x1++;
            else if (dir == 1) y1++;
            else if (dir == 2) x2--;
            else if (dir == 3) y2--;

            // 새로운 방향에서 다음 위치 계산
            ny = y + dy[dir];
            nx = x + dx[dir];
        }

        x = nx;
        y = ny;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
