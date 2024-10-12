#include <iostream>
using namespace std;

int main() {
    int a;
    int x;
    int y;

    cin >> a;
    cin.get();
    
    cin >> x;
    cin.get();

    cin >> y;
    cin.get();
    
    swap(x,y);

    cout << "010-" << x << "-" << y;
    return 0;
}