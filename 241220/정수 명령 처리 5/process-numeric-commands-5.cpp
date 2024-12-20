#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;

    for(int i=0;i<n;i++) {
        string str;
        cin >> str;
        if(str == "push_back") {
            int num;
            cin >> num;
            v.push_back(num);
        } else if(str == "get") {
            int num;
            cin >> num;
            cout << v[num-1] << '\n';
        } else if(str == "pop_back") {
            v.pop_back();
        } else if(str == "size") {
            cout << v.size() << '\n';
        }
    }
    return 0;
}