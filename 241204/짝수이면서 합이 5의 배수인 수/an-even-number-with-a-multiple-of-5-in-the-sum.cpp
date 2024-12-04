#include <iostream>
using namespace std;

string PrintYesNo(int n) {
    if(n % 5 == 0 && n % 2 == 0) return "Yes";
    else "No";
}

int main() {
    int n;
    cin >> n;

    cout << PrintYesNo(n);
    return 0;
}