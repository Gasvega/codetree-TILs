#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    if (n < 0) {
        cout << n << endl << "minus";
    }
    else {
        cout << n;
    }
    return 0;
}