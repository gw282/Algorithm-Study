#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Circle {
    public:
        int x,y,num;

        Circle(int x, int y, int num) {
            this->x = x;
            this->y = y;
            this->num = num;
        }
        Circle() {}
};

bool cmp(Circle a, Circle b) { 
    return abs(a.x) + abs(a.y) < abs(b.x) + abs(b.y);
}

int main() {
    int n;
    cin >> n;

    vector<Circle> circles(n);

    for(int i = 0; i < n; i++) {
        cin >> circles[i].x >> circles[i].y;
        circles[i].num = i+1;
    }

    sort(circles.begin(), circles.end(), cmp); 

    for(int i = 0; i < n; i++) {
        cout << circles[i].num << endl;
    }

    return 0;
}
