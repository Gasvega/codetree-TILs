#include <iostream>

using namespace std;

int main() {
    int a; 
    int b;

    cin >> a >> b;

    a +=  b;
    b += a;

    cout << a << " " << b; 
    return 0;
}