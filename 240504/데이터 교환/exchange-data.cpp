#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 6;
    int c = 7;

    b = 5;
    c = 6;
    a = 7;

    cout << a << "\n" << b << "\n" << c;

    return 0;
}