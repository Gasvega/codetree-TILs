#include <iostream>

using namespace std;
int main() {

    int n;
    int r;

    cin >> n;
    
    if( n < 5 ) {
        r = n * n;
        cout << r;
        cout << "\n tiny";
    }
    else {
        r = n * n;
        cout << r;
    }

    return 0;
}