#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>  // abs() 함수 사용을 위해 추가
using namespace std;

class Circle {
    public:
        int x, y, num;

        Circle(int x, int y, int num) {
            this->x = x;
            this->y = y;
            this->num = num;
        }
        Circle() {}
};

// 비교 함수
bool cmp(Circle a, Circle b) {
    int distanceA = abs(a.x) + abs(a.y);
    int distanceB = abs(b.x) + abs(b.y);
    
    if (distanceA == distanceB) {
        return a.num < b.num;  // 거리 같으면 번호가 작은 순으로 정렬
    }
    
    return distanceA < distanceB;  // 거리 기준으로 정렬
}

int main() {
    int n;
    cin >> n;

    vector<Circle> circles(n);

    for(int i = 0; i < n; i++) {
        cin >> circles[i].x >> circles[i].y;
        circles[i].num = i + 1;  // 점 번호는 1부터 시작
    }

    // 정렬
    sort(circles.begin(), circles.end(), cmp);

    // 출력
    for(int i = 0; i < n; i++) {
        cout << circles[i].num << endl;
    }

    return 0;
}
