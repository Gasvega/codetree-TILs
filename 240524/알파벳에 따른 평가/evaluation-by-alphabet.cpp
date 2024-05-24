#include <iostream>
using namespace std;

int main() {
    char alphabet;

    cin >> alphabet;

    if(alphabet == 'S') {
        cout << "Superior";
    }
    else if(alphabet == 'A') {
        cout << "Excellent";
    }
    else if(alphabet == 'B') {
        cout << "Good";
    }
    else if(alphabet == 'C') {
        cout << "Usually";
    }
    else if(alphabet == 'D') {
        cout << "Effort";
    }
    else {
        cout << "Failure";
    }
    return 0;
}