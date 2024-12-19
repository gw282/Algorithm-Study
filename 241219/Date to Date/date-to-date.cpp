#include <iostream>
using namespace std;

int main() {
    int m1,d1,m2,d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int day = 0;
    if(m1 == m2) {
        day = d2- d1 + 1;
    } else {
        if(m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12) {
            day += (32 - d1 + d2);
        } else if(m1 == 2) {
            day += (29 - d1 + d2);
        } else {
            day += (31 - d1 + d2);
        }
        m1 += 1;

        while(m1 != m2) {
            if(m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12) {
                day += 31;
            } else if(m1 == 2) {
                day += 28;
            } else {
                day += 30;
            }
            m1++;
        }
    }

    cout << day;
    return 0;
}