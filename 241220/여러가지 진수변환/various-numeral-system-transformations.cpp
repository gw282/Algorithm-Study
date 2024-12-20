#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;
    vector<int> v;

    while(n > 0) {
        v.push_back(n%b);
        n = n/b;
    }

    for(int i=v.size()-1;i>=0;i--) {
        cout << v[i];
    }
    return 0;
}