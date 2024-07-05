#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    for(int i = 1; i <= 5; i++) {
         if(i*n % 7 == 0) {
            cout << n*i << " ";
         }
        
    }
    return 0;
}