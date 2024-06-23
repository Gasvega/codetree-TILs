#include <iostream>

using namespace std;

int main() {
    int a;
    int b;

    cin >> a >> b;

    if(a % 2 == 0) {
        cout << "even\n";
    }
    else if(a % 3 == 0) {
        cout << "odd\n";
    }
    if(b % 2 == 0) {
        cout << "even";
    }
    else if(b % 3 == 0) {
        cout << "odd";
    }
    return 0;
}