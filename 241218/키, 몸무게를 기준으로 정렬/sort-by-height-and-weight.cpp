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
            this->h = h;
            this->w = w;
        }
        Person() {}
};

bool cmp(Person a, Person b) { 
    if(a.h != b.h) return a.h < b.h; 
    return a.w > b.w; 
}

int main() {
    int n;
    cin >> n;

    vector<Person> persons(n);

    for(int i = 0; i < n; i++) {
        cin >> persons[i].name >> persons[i].h >> persons[i].w;
    }

    sort(persons.begin(), persons.end(), cmp); 

    for(int i = 0; i < n; i++) {
        cout << persons[i].name << " " << persons[i].h << " " << persons[i].w << endl;
    }

    return 0;
}
