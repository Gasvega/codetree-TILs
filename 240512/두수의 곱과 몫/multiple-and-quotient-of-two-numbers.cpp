#include <iostream>

using namespace std;
int main() {
    int a;
    int b;
    int result_a;
    int result_b;

    cin >> a >> b;

    result_a = a*b;
    result_b = a/b;


    cout << a<< " * " << b << " = " << result_a
    << "\n" << a << " / " << b << " = " << result_b;

    return 0;
}