#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person {
    public:
        string name;
        int h;
        int w;

        Person(string name, int h, int w) {
            this->name = name;
            this->h = h;
            this->w = w;
        }
        Person() {}
};

bool cmp(Person a, Person b) { 
    return a.h < b.h; 
}

int main() {
    int n;
    cin >> n;

    vector<Person> persons(n);

    for(int i = 0; i < n; i++) {
        cin >> persons[i].name >> persons[i].h >> persons[i].w;
    }

    sort(persons.begin(), persons.end(), cmp); // 벡터 정렬

    for(int i = 0; i < n; i++) {
        cout << persons[i].name << " " << persons[i].h << " " << persons[i].w << endl;
    }

    return 0;
}
