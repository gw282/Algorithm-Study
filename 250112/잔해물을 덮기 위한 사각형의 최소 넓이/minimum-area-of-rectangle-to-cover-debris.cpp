#include <iostream>
#include <algorithm>

#define MAX_R 2000
#define OFFSET 1000

using namespace std;

int x1, y1, x2, y2;
int x3, y3, x4, y4;
int maxx = -1, maxy = -1, minx = MAX_R + 1, miny = MAX_R + 1;

int checked[MAX_R + 1][MAX_R + 1] = {0};

int main() {
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    
    x1 += OFFSET;
    y1 += OFFSET;
    x2 += OFFSET;
    y2 += OFFSET;
    x3 += OFFSET;
    y3 += OFFSET;
    x4 += OFFSET;
    y4 += OFFSET;

    for (int i = x1; i < x2; i++) {
        for (int j = y1; j < y2; j++) {
            checked[i][j] = 1;
        }
    }

    for (int i = x3; i < x4; i++) {
        for (int j = y3; j < y4; j++) {
            checked[i][j] = 0;
        }
    }

    for (int i = 0; i <= MAX_R; i++) {
        for (int j = 0; j <= MAX_R; j++) {
            if (checked[i][j] == 1) {
                maxx = max(maxx, i);
                maxy = max(maxy, j);
                minx = min(minx, i);
                miny = min(miny, j);
            }
        }
    }
    if (maxx == -1 || maxy == -1 || minx == MAX_R + 1 || miny == MAX_R + 1)  cout << 0;
    else cout << (maxx - minx + 1) * (maxy - miny + 1);
    
    return 0;
}
