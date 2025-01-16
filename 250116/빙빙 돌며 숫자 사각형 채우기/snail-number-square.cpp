#include <iostream>
using namespace std;

int n, m;
int num = 1; // 시작 숫자

int dy[4] = {0, 1, 0, -1}; // 방향 배열 (오른쪽, 아래쪽, 왼쪽, 위쪽)
int dx[4] = {1, 0, -1, 0};

int arr[102][102]; // 최대 크기 100x100을 처리하기 위한 배열

// 경계를 벗어나지 않는지 체크
bool border(int nx, int ny) {
    if(nx < 0 || ny < 0 || nx >= m || ny >= n) return false;
    return true;
}

void fillSpiral() {
    int x = 0, y = 0; // 시작 좌표 (0,0)
    int d = 0; // 시작 방향 (오른쪽 방향)
    
    while(num <= n * m) {
        arr[y][x] = num++; // 현재 위치에 숫자 채우기
        
        // 다음 위치 계산
        int nx = x + dx[d];
        int ny = y + dy[d];
        
        // 다음 위치가 경계 안에 있고, 아직 숫자가 채워지지 않았다면 이동
        if(border(nx, ny) && arr[ny][nx] == 0) {
            x = nx;
            y = ny;
        } else {
            // 경계 밖이거나 이미 숫자가 채워졌으면 방향 전환
            d = (d + 1) % 4; // 방향을 오른쪽으로 전환 (0 -> 1 -> 2 -> 3 -> 0 ...)
            x += dx[d];
            y += dy[d];
        }
    }
}

int main() {
    cin >> n >> m;

    fillSpiral(); // 달팽이 모양으로 배열 채우기

    // 배열 출력
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
