#include <iostream>
using namespace std;

int n, t;
int y, x;
char dir;
int d;

int dy[4] = {1,0,-1,0};
int dx[4] = {0,1,0,-1};

int arr[52][52];

bool border(int nx, int ny) {
    if(nx < 1 || ny < 1 || nx > n || ny > n) return false;
    return true;
}
void func() {
    if(dir == 'U') d = 0;
    else if(dir == 'R') d = 1;
    else if(dir == 'D') d = 2;
    else if(dir == 'L') d = 3;

    while(t--) {
        int nx = x + dx[d];
        int ny = y + dy[d];

        if(border(nx,ny)) {
            x = nx; y= ny;
        } else {
            d = (d+2) % 4;
        }
    }
}

int main() {
    cin >> n >> t;
    cin >> y >> x;
    cin >> dir;

    func();

    cout << y << ' ' << x;
    return 0;
}