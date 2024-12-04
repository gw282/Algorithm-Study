#include <iostream>
using namespace std;

string PrintYesNo(int n) {
    int count = 0;
    while(n) {
        count += n%10;
        n = n/10;
    }
    if(count % 5 == 0) return "Yes";
    else return "No";
}

int main() {
    int n;
    cin >> n;
    if(n%2 == 1) cout << "No";
    else cout << PrintYesNo(n);
    return 0;
}