#include <iostream>

#define MAX_R 200
#define OFFSET 100

using namespace std;

int N;
int x[200], y[200];

int checked[MAX_R + 1][MAX_R + 1];

int main() {
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];

        x[i] += OFFSET;
        y[i] += OFFSET;
    }

    for(int i = 0; i < N; i++) {
        for(int dx = x[i]; dx < x[i] + 8; dx++) {
            for(int dy = y[i]; dy < y[i] + 8; dy++) {
                checked[dx][dy] = 1;
            }
        }
    }

    int area = 0;
    for(int i = 0; i <= MAX_R; i++)
        for(int j = 0; j <= MAX_R; j++)
            if(checked[i][j] == 1)
                area++;
    
    cout << area;
    return 0;
}