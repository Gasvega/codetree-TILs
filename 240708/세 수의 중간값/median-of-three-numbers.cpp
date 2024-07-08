#include <iostream>
using namespace std;

int main() {
    int a,b,c;

    cin >> a >> b >> c; 

    cout << (b<=c && b>=a ? 1 : 0);
    return 0;
}