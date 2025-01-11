#include <iostream>

using namespace std;

int x1[3], y1[3];
int x2[3], y2[3];
int board[2002][2002];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];

    for(int i=x1[0];i<x2[0];i++) {
        for(int j=y1[0];j<y2[0];j++) {
            board[i+100][j+100] = 1;
        }
    }

    for(int i=x1[1];i<x2[1];i++) {
        for(int j=y1[1];j<y2[1];j++) {
            board[i+100][j+100] = 1;
        }
    }

    for(int i=x1[2];i<x2[2];i++) {
        for(int j=y1[2];j<y2[2];j++) {
            board[i+100][j+100] = 0;
        }
    }


    int ans = 0;
    for(int i=0;i<2000;i++) {
        for(int j=0;j<2000;j++) {
            if(board[i][j] == 1) ans++;
        }
    }

    cout << ans;
    
    return 0;
}