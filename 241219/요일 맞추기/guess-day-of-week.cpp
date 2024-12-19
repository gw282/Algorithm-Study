#include <iostream>
using namespace std;

int main() {
    int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    string day[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    int m1,d1,m2,d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int days1 = d1, days2 = d2, diff;

    for(int i=1;i<m1;i++) {
        days1 += month[i];
    }

    for(int i=1;i<m2;i++) {
        days2 += month[i];
    }

    diff = days2 - days1;
    if(diff < 0) {
        int back = abs(diff) % 7;
        cout << day[7-back];
    } else {
        int front = diff % 7;
        cout << day[front];
    }
    return 0;
}