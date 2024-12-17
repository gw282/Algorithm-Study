#include <iostream>
#include <string>
using namespace std;

class CodeInfo {
    public:
        string code;    // 해제 코드
        char color;     // 선의 색 (R, G, B)
        int second;     // 특정 초

        // Constructor to initialize the class with values
        CodeInfo(string code, char color, int second) {
            this->code = code;
            this->color = color;
            this->second = second;
        }
};

int main() {
    string code;
    char color;
    int second;

    // Input: "해제 코드", "선의 색", "특정 초"
    cin >> code >> color >> second;

    // Create an object of CodeInfo with the provided values
    CodeInfo info(code, color, second);

    // Output the formatted result
    cout << "code : " << info.code << endl;
    cout << "color : " << info.color << endl;
    cout << "second : " << info.second << endl;

    return 0;
}
