#include <iostream>
using namespace std;

int main() {
    int month[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
    string day[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    int m1,d1,m2,d2;
    string day_selected;
    cin >> m1 >> d1 >> m2 >> d2 >> day_selected;

    int days1 = d1, days2 = d2, diff, sum = 0;

    for(int i=1;i<m1;i++) {
        days1 += month[i];
    }

    for(int i=1;i<m2;i++) {
        days2 += month[i];
    }

    diff = days2 - days1;

    sum += diff / 7;
    diff = diff % 7;

    for(int i=1;i<=diff;i++) {
        if(day[i] == day_selected) sum +=1;
    }
    cout << sum;
    return 0;
}