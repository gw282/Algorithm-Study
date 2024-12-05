#include <iostream>
using namespace std;

int Oper(int a, char o, int c) {
    if(o == '+') return a+c;
    if(o == '-') return a-c;
    if(o == '/') return a/c;
    if(o == '*') return a*c;
}

int main() {
    int a,c;
    char o;
    cin >> a >> o >> c;
    if(o != '+' && o != '-' && o != '/' && o != '*') {
        cout << "False";
    } else cout << a << " " << o << " " << c << " " << "=" << " " << Oper(a,o,c);
    return 0;
}