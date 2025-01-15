#include <iostream>
using namespace std;

int x = 0, y = 0, dir = 0;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int main() {
    string str;
    cin >> str;

    for(int i=0;i<str.length();i++) {
        if(str[i] == 'R') {
            dir = dir + 1;
            dir = dir % 4;
        } else if(str[i] == 'L') {
            dir = dir + 3;
            dir = dir % 4;
        } else {
            x += dx[dir];
            y += dy[dir];
        }
    }

    cout << x << ' ' << y;
    return 0;
}