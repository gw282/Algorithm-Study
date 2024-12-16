#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    string T;
    cin >> n >> k >> T;

    vector<string> words(n);
    for (int i=0;i<n;i++) {
        cin >> words[i];
    }


    vector<string> filtered;
    for (int i=0;i<n;i++) {
        if (words[i].substr(0, T.size()) == T) {
            filtered.push_back(words[i]);
        }
    }

    sort(filtered.begin(), filtered.end());

    cout << filtered[k - 1];

    return 0;
}
