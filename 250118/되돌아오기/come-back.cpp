#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int x = 0, y = 0;
    int tot = 0;  // 총 시간 변수
    for (int i=0;i<N;i++) {
        string direction;
        int distance;
        cin >> direction >> distance;

        while (distance--) {
            tot++;

            if (direction == "W") {
                x -= 1;  // 서쪽
            } else if (direction == "S") {
                y -= 1;  // 남쪽
            } else if (direction == "N") {
                y += 1;  // 북쪽
            } else if (direction == "E") {
                x += 1;  // 동쪽
            }

            if (x == 0 && y == 0) {
                cout << tot;
                return 0;
            }
        }
    }

    // (0, 0)에 도달하지 못했으면 -1 출력
    cout << -1;
    return 0;
}
