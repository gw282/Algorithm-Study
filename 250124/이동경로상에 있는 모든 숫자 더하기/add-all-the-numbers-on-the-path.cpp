#include <iostream>
using namespace std;

int n,t;
string str;

int a[102][102];

int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};

int main() {
    cin >> n >> t;
    cin >> str;

    int x = (n+1)/2;
    int y = (n+1)/2;
    int dir = 0;


    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            cin >> a[i][j];
        }
    }

    int sum = a[y][x];

    for(int i=0;i<str.length();i++) {
        if(str[i] == 'R') {
            dir = (dir+1) % 4;
        } else if (str[i] == 'L') {
            dir = (dir+3) % 4;
        } else {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if(nx <= n && ny <= n && nx >= 1 && ny >= 1) {
                sum += a[ny][nx];
                x = nx;
                y = ny;
            }
        }
    }
    cout << sum;

    return 0;
}