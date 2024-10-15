#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;

    cin >> a >> b >> c;

    if(b > a && b < c) {
        cout << 1;
    }
    else
        cout << 0;
    return 0;
}