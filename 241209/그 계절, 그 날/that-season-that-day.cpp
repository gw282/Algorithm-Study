#include <iostream>
using namespace std;

string Weather(int Y,int a,int b) {
    bool Yun = false;

    if((Y % 4 == 0 && Y % 100 != 0) || (Y % 4 == 0 && Y %100 == 0 && Y % 400 == 0)) {
        Yun = true;
    }
    if(a == 2 && b > 28 && !Yun) return "-1";
    if(a == 2 && b > 29 && Yun) return "-1";
    if(a == 4 && b > 30) return "-1";
    if(a == 6 && b > 30) return "-1";
    if(a == 9 && b > 30) return "-1";
    if(a == 11 && b > 30) return "-1";

    if(a>=3 && a<=5) return "Spring";
    if(a>=6 && a<=8) return "Summer";
    if(a>=9 && a<=11) return "Fall";
    if(a==12 || a==1 || a==2) return "Winter";
}

int main() {
    int Y, M, D;

    cin >> Y >> M >> D;

    cout << Weather(Y,M,D);
    return 0;
}