#include <iostream>

using namespace std;

int N, K, P, T; // N: 개발자 수, K: 악수 시 전염병 옮기는 횟수, P: 감염된 개발자 번호, T: 악수 횟수
int shake[252][2]; // t초에 아굿하는 x와 y 저장
int infected[100][2]; // n번호인 개발자가 감염여부와 감염력 저장

int main() {
    cin >> N >> K >> P >> T;
    infected[P][0] = 1;
    infected[P][1] = K;

    for (int i = 0; i < T; i++) {
        int t, x, y;
        cin >> t >> x >> y; // t초에 x와 y가 악수

        shake[t][0] = x;
        shake[t][1] = y;
    }

    for(int i=1;i<=250;i++) {
        if(shake[i][0] == 0) continue;

        if(infected[shake[i][0]][0] == 1 & infected[shake[i][1]][0] == 1) { // 둘 다 감염된 상태
            if(infected[shake[i][0]][1] > 0) infected[shake[i][0]][1]--;
            if(infected[shake[i][1]][1] > 0) infected[shake[i][1]][1]--;
        }
        else if(infected[shake[i][0]][0] == 1) { // x만 감염된 상태
            if(infected[shake[i][0]][1] > 0) { // 감염력이 있는 경우
                infected[shake[i][1]][0] = 1; // y 감염
                infected[shake[i][1]][1] = K; // y 감염력 충전
                infected[shake[i][0]][1]--; // x 감염력 감소
            }
        }
        else if(infected[shake[i][1]][0] == 1) { // y만 감염된 상태
            if(infected[shake[i][1]][1] > 0) { // 감염력이 있는 경우
                infected[shake[i][0]][0] = 1; // x 감염
                infected[shake[i][0]][1] = K; // x 감염력 충전
                infected[shake[i][1]][1]--; // y 감염력 감소
            }
        }
    }

    for(int i=1;i<=N;i++) {
        cout << infected[i][0];
    }

    return 0;
}