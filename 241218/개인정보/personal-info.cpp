#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip> // 소수 출력용 헤더 추가

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

    // 이름 기준으로 정렬
    sort(students.begin(), students.end(), compareByName);

    // 소수 첫째 자리 고정 출력 설정
    cout << fixed << setprecision(1); 

    cout << "name" << endl;
    for(const auto& student : students) {
        cout << student.name << " " << student.height << " " << student.weight << endl;
    }

    // 키 기준으로 정렬
    sort(students.begin(), students.end(), compareByHeight);

    cout << "\nheight" << endl;
    for(const auto& student : students) {
        cout << student.name << " " << student.height << " " << student.weight << endl;
    }

    return 0;
}
