#include <iostream>
#include <string>
using namespace std;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int main() {
    string commands;
    cin >> commands;
    
    int x = 0, y = 0;
    int dir = 0;
    
    for (int time = 1; time <= commands.length(); ++time) {
        char command = commands[time - 1];
        
        if (command == 'L') {
            dir = (dir + 3) % 4;
        } else if (command == 'R') {
            dir = (dir + 1) % 4;
        } else if (command == 'F') {
            x += dx[dir];
            y += dy[dir];
        }
        
        // 현재 위치가 (0, 0)에 도달했는지 확인
        if (x == 0 && y == 0) {
            cout << time << endl;
            return 0;
        }
    }
    
    // (0, 0)에 도달하지 못하면 -1 출력
    cout << -1 << endl;
    return 0;
}
