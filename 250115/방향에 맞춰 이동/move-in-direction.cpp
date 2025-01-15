#include <iostream>
using namespace std;

int n, x = 0, y = 0;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};

int main() {
    cin >> n;

    while(n--) {
        char dir;
        int num;
        cin >> dir >> num;

        if(dir =='W') {
            x += dx[0] * num;
            y += dy[0] * num;
        } else if(dir =='S') {
            x += dx[1] * num;
            y += dy[1] * num;
        } else if(dir =='E') {
            x += dx[2] * num;
            y += dy[2] * num;
        } else if(dir =='N') {
            x += dx[3] * num;
            y += dy[3] * num;
        }
    }
    cout << x << ' ' << y;
    return 0;
}