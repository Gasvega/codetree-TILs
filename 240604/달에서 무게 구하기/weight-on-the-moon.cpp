#include <iostream>
using namespace std;

int main() {
    int g = 13;
    float gper = 0.165;
    float ggper;

    ggper = g * gper;

    cout << fixed;
    cout.precision(6);
    cout << g << " * " << gper << " = "<< ggper; 


    return 0;
}