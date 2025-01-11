#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // 직사각형 A, B, M의 좌표 입력
    int x1A, y1A, x2A, y2A;
    int x1B, y1B, x2B, y2B;
    int x1M, y1M, x2M, y2M;
    
    cin >> x1A >> y1A >> x2A >> y2A;
    cin >> x1B >> y1B >> x2B >> y2B;
    cin >> x1M >> y1M >> x2M >> y2M;
    
    // 격자 크기 2001 x 2001
    vector<vector<int>> grid(2001, vector<int>(2001, 0));

    // 직사각형 A를 표시 (1로 설정)
    for (int i = x1A + 1000; i < x2A + 1000; i++) {
        for (int j = y1A + 1000; j < y2A + 1000; j++) {
            grid[i][j] = 1;
        }
    }

    // 직사각형 B를 표시 (1로 설정)
    for (int i = x1B + 1000; i < x2B + 1000; i++) {
        for (int j = y1B + 1000; j < y2B + 1000; j++) {
            grid[i][j] = 1;
        }
    }

    // 직사각형 M을 덮을 부분을 0으로 설정
    for (int i = x1M + 1000; i < x2M + 1000; i++) {
        for (int j = y1M + 1000; j < y2M + 1000; j++) {
            grid[i][j] = 0;
        }
    }

    // 직사각형 A, B의 넓이 계산 (겹치지 않는 부분)
    int areaA = (x2A - x1A) * (y2A - y1A);
    int areaB = (x2B - x1B) * (y2B - y1B);
    int result = 0;

    // A와 B에서 M으로 덮이지 않은 부분을 세기
    for (int i = 0; i < 2001; i++) {
        for (int j = 0; j < 2001; j++) {
            if (grid[i][j] == 1) {
                result++;
            }
        }
    }

    cout << result << endl;
    
    return 0;
}
