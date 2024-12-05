#include <iostream>
#include <vector>
using namespace std;

vector<int> A;
vector<int> B;

bool check(int n) {
    for(int i=0;i<B.size();i++) {
        if(A[i+n] == B[i]) continue;
        return false;
    }
    return true;
}

string Seq(int a, int b) {
    int num;

    for(int i=0;i<=B.size();i++) {
        if(A[i] == B[0]) {
            if(check(i)) return "Yes";
        }
    }
    return "No";
}

int main() {
    int a, b;
    cin >> a >> b;

    for(int i=0;i<a;i++) {
        int num;
        cin >> num;
        A.push_back(num);
    }
    for(int i=0;i<b;i++) {
        int num;
        cin >> num;
        B.push_back(num);
    }
    cout << Seq(a,b);

    return 0;
}