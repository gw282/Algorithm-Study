#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int>> sequence(N);

    for (int i = 0; i < N; ++i) {
        cin >> sequence[i].first;
        sequence[i].second = i + 1;
    }
    
   
    vector<pair<int, int>> sorted_sequence = sequence;
    stable_sort(sorted_sequence.begin(), sorted_sequence.end());
    
    vector<int> result(N);
    
    for (int i = 0; i < N; ++i) {
        result[sorted_sequence[i].second - 1] = i + 1;
    }
    
    for (int i = 0; i < N; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}
