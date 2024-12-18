#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person {
    public:
        int h;
        int w;
        int num;

        Person(int h, int w, int num) {
            this->h = h;
            this->w = w;
            this->num = num;
        }
        Person() {}
};

bool cmp(Person a, Person b) { 
    if(a.h != b.h) return a.h > b.h; 
    if(a.w != b.w) return a.w > b.w; 
    if(a.num != b.num) return a.num < b.num; 
}

int main() {
    int n;
    cin >> n;

    vector<Person> persons(n);

    for(int i = 0; i < n; i++) {
        cin >> persons[i].h >> persons[i].w;
        persons[i].num = 1+i;
    }

    sort(persons.begin(), persons.end(), cmp); 

    for(int i = 0; i < n; i++) {
        cout << persons[i].h << " " << persons[i].w << " " << persons[i].num << endl;
    }

    return 0;
}
