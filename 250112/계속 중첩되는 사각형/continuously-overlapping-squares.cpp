#include <iostream>

using namespace std;

int N;
int x1[202], y1[202];
int x2[202], y2[202];
int board[202][202];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        for (int x = x1[i] + 100; x < x2[i] + 100; x++) {
            for (int y = y1[i] + 100; y < y2[i] + 100; y++) {
                if(i%2 == 0) board[x][y] = 0;
                else board[x][y] = 1;
            }
        }
    }

    int ans = 0;

    for (int i = 0; i <= 200; i++) {
        for (int j = 0; j <= 200; j++) {
            if (board[i][j] >= 1) ans++;
        }
    }

    cout << ans;

    return 0;
}
