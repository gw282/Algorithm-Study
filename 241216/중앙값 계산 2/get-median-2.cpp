#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    
    for (int i=0;i<n;i++) {
        cin >> nums[i];
    }
    
    vector<int> current; // 입력된 숫자들을 누적
    for (int i=0; i<n;i++) {
        current.push_back(nums[i]);
        
        // 홀수 번째 수일 때만 중앙값 계산
        if ((i + 1) % 2 == 1) {
            sort(current.begin(), current.end()); // 정렬
            int mid = current.size() / 2;         // 중앙값 인덱스
            cout << current[mid] << " ";
        }
    }
    
    return 0;
}
