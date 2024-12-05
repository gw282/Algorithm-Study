#include <iostream>
using namespace std;

int Pow(int a, int b) {
    int result = a;
    for(int i=0;i<b-1;i++) {
        result *= a;
    }
    return result;
}
int main() {
    int a, b;
    cin >> a >> b;

    cout << Pow(a,b);
    return 0;
}