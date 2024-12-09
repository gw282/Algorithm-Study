#include <iostream>
using namespace std;

string palindrome(string &s) {
    for(int i=0;i<s.length()/2;i++) {
        if(s[i] == s[s.length()-i-1]) continue;
        return "No";
    }   
    return "Yes";
}

int main() {
    string s;
    cin >> s;

    cout << palindrome(s);
    return 0;
}