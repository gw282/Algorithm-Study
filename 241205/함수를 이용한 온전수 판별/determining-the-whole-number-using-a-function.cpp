#include <iostream>
using namespace std;

int Count(int a, int b) {
    int count = 0;

    for(int i=a;i<=b;i++) {
        if(i%2 != 0) {
            if(i%10 != 5) {
                if(i%3 != 0 || i%9 == 0) count++;
            }
        }
    }
    return count;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << Count(a,b);
    return 0;
}