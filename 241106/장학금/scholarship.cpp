#include <iostream>
using namespace std;

int main() {
    int middle;
    int last;

    cin >> middle >> last;

    if( (middle >= 90) && (last >= 95) && (last <= 100)) {
        cout << 100000;
    }
    else if((middle >= 90) && (last >= 90) && (last < 95)) {
        cout << 50000;
    }
    else {
        cout << 0;
    }
    return 0;
}