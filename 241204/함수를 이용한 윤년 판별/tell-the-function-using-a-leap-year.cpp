#include <iostream>
using namespace std;

string DetectYear(int n) {
    if(n % 4 != 0) return "false";
    if(n % 100 == 0 && n % 400 != 0) return "false";
    else return "true";
}
int main() {
   int n;
   cin >> n;

    cout << DetectYear(n);
    return 0;
}