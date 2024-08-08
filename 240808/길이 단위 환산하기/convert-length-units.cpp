#include <iostream>
using namespace std;

int main() {
    float ft = 30.48;
    float a;
    cin >> a;
    cout << fixed;
    cout.precision(1);
    cout << a*ft;
    return 0;
}