#include <iostream>
using namespace std;

int n;
int x[1000];
char dir[1000];
int cnt_b[200002];
int cnt_w[200002];
bool col[200002];
int loc = 100000;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    for (int i = 0; i < n; i++) {
        if (dir[i] == 'R') {
            // 오른쪽으로 색칠
            for (int j = loc; j < loc + x[i]; j++) {
                col[j] = true;  // 검은색
                cnt_b[j]++;
            }
            loc += (x[i] - 1);
        } else if (dir[i] == 'L') {
            // 왼쪽으로 색칠
            for (int j = loc; j > loc - x[i]; j--) {
                col[j] = false;  // 흰색
                cnt_w[j]++;
            }
            loc -= (x[i] - 1);
        }
    }

    int b = 0, w = 0, g = 0;
    for (int i = 0; i < 200002; i++) {
        if (cnt_b[i] == 0 && cnt_w[i] == 0) continue;
        if (cnt_b[i] >= 2 && cnt_w[i] >= 2) g++;  // 4번 이상 칠해지면 회색
        else if (col[i] == true) b++;  // 검정색
        else w++;  // 흰색
    }

    cout << w << ' ' << b << ' ' << g;

    return 0;
}
