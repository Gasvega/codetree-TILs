#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = 4;
    int c = 0;
    b = a;
    c = a * b;
    
    cout << a << " " << b << "\n";
    cout << c;

    return 0;
}