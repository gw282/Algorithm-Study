#include <iostream>
#include <algorithm>
using namespace std;

string words[102];

int main() {
    int n;
    cin >> n;

    for(int i=0;i<n;i++) {
        cin >> words[i];
    }
    sort(words,words+n);

        for(int i=0;i<n;i++) {
        cout << words[i] <<'\n';
    }
    return 0;
}