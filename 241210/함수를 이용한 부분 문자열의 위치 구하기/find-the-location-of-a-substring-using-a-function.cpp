#include <iostream>
#include <string>
using namespace std;

string obj_str, input_str;


int main() {
    cin >> obj_str >> input_str;

    if(obj_str.find(input_str) == string::npos) cout << -1;
    else cout << obj_str.find(input_str);
    return 0;
}