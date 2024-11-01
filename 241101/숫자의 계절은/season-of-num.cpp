#include <iostream>
using namespace std;

int main() {
    int m;
    
    cin >> m;

    if(m / 3 == 1 || m / 4 == 1 || m / 5 == 1 ) {
        cout << "Spring";
    }
    else if(m / 6 == 1 || m / 7 == 1 || m / 8 == 1) {
        cout << "Summer";
    }
    else if(m / 9 == 1 || m / 10 == 1 || m / 11 == 1) {
        cout << "Fall";
    }
    else if(m / 12 == 1 || m / 1 == 1 || m / 2 == 1) {
        cout << "Winter";
    }

    return 0;
}