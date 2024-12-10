#include <iostream>
#include <unordered_set>
using namespace std;

string func(string str) {
    unordered_set<char> alphabet;

    for(char c: str) {
        alphabet.insert(c);
    }
    if(alphabet.size() >= 2) return "Yes";
    else return "No";
}

int main() {
    string str;
    cin >> str;

    cout << func(str);
    return 0;
}