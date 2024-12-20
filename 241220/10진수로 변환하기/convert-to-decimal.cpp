#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    int binary[8];
    for(int i=0;i<n.length();i++) {
        binary[i] = n[i] - '0';
    }
    int num = 0;

    for(int i=0;i<n.length();i++) {
        num = num * 2 + binary[i];
    }
    cout << num;
}