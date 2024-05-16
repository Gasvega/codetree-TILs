#include <iostream>

using namespace std;
int main() {

    int n;

    cin >> n;
    
    if( n < 5 ) {
        n *= n;
        cout << n;
        cout << "\ntiny";
    }
    else {
        n *= n;
        cout << n;
    }

    return 0;
}