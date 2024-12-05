#include <iostream>
using namespace std;

string DateAvail(int a, int b) {
    if(a > 12 || b > 31) return "No";
    if(a == 2 && b > 28) return "No";
    if(a == 4 && b > 30) return "No";
    if(a == 6 && b > 30) return "No";
    if(a == 9 && b > 30) return "No";
    if(a == 11 && b > 30) return "No";
    return "Yes";
}

int main() {
    int a,b;
    cin >> a >> b;

    cout << DateAvail(a,b);
    return 0;
}