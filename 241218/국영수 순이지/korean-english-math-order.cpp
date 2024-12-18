#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

bool cmp(tuple<string, int, int, int> a, tuple<string, int, int, int> b) {
    if(get<1>(a) != get<1>(b)) return get<1>(a) > get<1>(b); 
    if(get<2>(a) != get<2>(b)) return get<2>(a) > get<2>(b); 
    return get<3>(a) > get<3>(b); 

}

int main() {
    int n;
    cin >> n;

    vector<tuple<string, int, int, int>> students(n);

    string name;
    int kor, eng, math;

    for(int i = 0; i < n; i++) {
        cin >> name >> kor >> eng >> math;
        students[i] = make_tuple(name, kor, eng, math);
    }

    sort(students.begin(), students.end(), cmp);

    for(int i = 0; i < n; i++) {
        string name;
        int kor, eng, math;
        tie(name, kor, eng, math) = students[i];
        cout << name << " " << kor << " " << eng << " " << math << endl;
    }

    return 0;
}
