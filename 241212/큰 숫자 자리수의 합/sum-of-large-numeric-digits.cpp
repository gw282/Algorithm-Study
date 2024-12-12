#include <iostream>
using namespace std;

int func(int num) {
    if(num / 10 == 0) return num;

    return func(num/10) + num%10;    
}

int main() {
    
    int a, b, c;

    cin >> a >> b >> c;
    
    int num = a*b*c;
    cout << func(num); 
    
    return 0;
}