#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person {
    public:
        int h;
        int w;
        int num;

        Person(int h, int w) {
            this->h = h;
            this->w = w;
            this->num = num;
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
        cin >> persons[i].h >> persons[i].w;
        persons[i].num = i+1;
    }

    sort(persons.begin(), persons.end(), cmp); 

    for(int i = 0; i < n; i++) {
        cout << persons[i].h << " " << persons[i].w << " " << persons[i].num << endl;
    }

    return 0;
}
