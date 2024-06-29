#include <iostream>

using namespace std;

int main() {
    int a_eng, a_math;
    int b_eng, b_math;

    cin >> a_eng >> a_math;
    cin >> b_eng >> b_math;

    if(a_eng > b_eng and a_math > b_math) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    
    return 0;
}