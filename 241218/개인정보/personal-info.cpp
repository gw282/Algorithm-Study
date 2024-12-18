#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Student {
    public:
        string name;
        int height;
        float weight;

        Student(string name, int height, float weight) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
};

bool compareByName(const Student &a, const Student &b) { 
    return a.name < b.name; 
}

bool compareByHeight(const Student &a, const Student &b) { 
    return a.height > b.height; 
}

int main() {
    vector<Student> students;


    for(int i = 0; i < 5; i++) {
        string name;
        int height;
        float weight;
        cin >> name >> height >> weight;
        students.emplace_back(name, height, weight);
    }


    sort(students.begin(), students.end(), compareByName);

    cout << "name" << endl;
    for(const auto& student : students) {
        cout << student.name << " " << student.height << " " << roundf(student.weight*10) /10 << endl;
    }

    sort(students.begin(), students.end(), compareByHeight);

    cout << "\nheight" << endl;
    for(const auto& student : students) {
        cout << student.name << " " << student.height << " " << roundf(student.weight*10) /10 << endl;
    }

    return 0;
}