#include <iostream>
#include <vector>
using namespace std;

int main() {
    string binary;
    cin >> binary;
    vector<int> v;
    int num = 0;
    for(int i = 0; i < (int) binary.size(); i++)
        num = num * 2 + (binary[i] - '0');
    
    num = num * 17;

    while(num > 0) {
        v.push_back(num%2);
        num /= 2;
    }

    for(int i=v.size()-1;i>=0;i--) {
        cout << v[i];
    }
    return 0;
}