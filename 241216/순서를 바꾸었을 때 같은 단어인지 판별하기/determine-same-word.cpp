#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s1;
    string s2;

    cin >> s1 >> s2;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    for(int i=0;i<s1.length();i++) {
        if(s1[i] == s2[i]) continue;
        else {
            cout << "No"; return 0;
        }
    }
    cout << "Yes";
    return 0;
}