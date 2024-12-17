#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Person {
    public:
        string name;
        string address;
        string city;

        Person(string name, string address, string city) {
            this->name = name;
            this->address = address;
            this->city = city;
        }
};

int main() {
    int n;
    cin >> n;

    vector<Person> people;

    for (int i = 0; i < n; i++) {
        string name, address, city;
        cin >> name >> address >> city;
        people.push_back(Person(name, address, city));
    }

    sort(people.begin(), people.end(), [](const Person &a, const Person &b) {
        return a.name > b.name;
    });

    cout << "name " << people[0].name << endl;
    cout << "addr " << people[0].address << endl;
    cout << "city " << people[0].city << endl;

    return 0;
}
