#include <iostream>
using namespace std;

void PrintNum(int n) {
    int num = 1;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            num = num % 10;
            if(num == 0) num = num+1;
            cout << num << ' ';
            num = num+1;
        }
        cout << '\n';
    }
}
int main() {
    int n, num;

    cin >> n;

    PrintNum(n);
    return 0;
}