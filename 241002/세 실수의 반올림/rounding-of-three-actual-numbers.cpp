#include <iostream>
using namespace std;

int main() {
    float a;
    float b;
    float c;

    cin >> a >> b >> c;

    cout << fixed;
    cout.precision(3);
    cout << a << "\n" <<
            b << "\n" <<
            c << "\n";
    return 0;
}