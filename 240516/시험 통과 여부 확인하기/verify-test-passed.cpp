#include <iostream>
using namespace std;

int main() {
    
    int n;

    cin >> n;

    if( n >= 80) {
        cout << "pass";
    }
    else {
        n = 80 - n;
        cout << n << " more score";
    }


    return 0;
}