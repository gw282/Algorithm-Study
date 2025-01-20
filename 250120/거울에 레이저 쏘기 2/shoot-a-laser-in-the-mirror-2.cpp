#include <iostream>
#include <vector>
#include <string>

using namespace std;

int dy[] = {-1, 0, 1, 0}; // U, R, D, L
int dx[] = {0, 1, 0, -1}; // U, R, D, L

// 방향 전환 함수
int reflect(char mirror, int dir) {
    if (mirror == '/') {
        if (dir == 0) return 1; // U -> R
        if (dir == 1) return 0; // R -> U
        if (dir == 2) return 3; // D -> L
        if (dir == 3) return 2; // L -> D
    } else if (mirror == '\\') {
        if (dir == 0) return 3; // U -> L
        if (dir == 1) return 2; // R -> D
        if (dir == 2) return 1; // D -> R
        if (dir == 3) return 0; // L -> U
    }
    return dir;
}

int main() {
    int N, K;
    cin >> N;

    vector<string> grid(N);
    for (int i = 0; i < N; ++i) {
        cin >> grid[i];
    }

    cin >> K;

    // 레이저 시작 위치와 방향 설정
    int x, y, dir;
    if (1 <= K && K <= N) { // 위쪽에서 아래로
        x = 0; y = K - 1; dir = 2; // Down
    } else if (N + 1 <= K && K <= 2 * N) { // 오른쪽에서 왼쪽으로
        x = K - N - 1; y = N - 1; dir = 3; // Left
    } else if (2 * N + 1 <= K && K <= 3 * N) { // 아래쪽에서 위로
        x = N - 1; y = 3 * N - K; dir = 0; // Up
    } else { // 왼쪽에서 오른쪽으로
        x = 4 * N - K; y = 0; dir = 1; // Right
    }

    int count = 0;
    while (x >= 0 && x < N && y >= 0 && y < N) {
        // 현재 거울에 따라 방향 변경
        dir = reflect(grid[x][y], dir);

        // 방향에 따라 이동
        x += dy[dir];
        y += dx[dir];

        // 반사 횟수 증가
        count++;
    }

    cout << count;

    return 0;
}
