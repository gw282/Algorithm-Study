#include <iostream>
using namespace std;

void Print5Stars(int n) {
    for(int i=0;i<n;i++) {
        cout << "*";
    }
}

int main() {
    for(int i=0;i<5;i++) {
        Print5Stars(10);
        cout << '\n';
    }
    return 0;
}