#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    string binary;
    cin >> binary;
    vector<int> v;
    int num = 0;
    for(int i = 0; i < (int) binary.size(); i++)
        num = num * a + (binary[i] - '0');
    

    while(num > 0) {
        v.push_back(num%b);
        num /= b;
    }

    for(int i=v.size()-1;i>=0;i--) {
        cout << v[i];
    }
    return 0;
}