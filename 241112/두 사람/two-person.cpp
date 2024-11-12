// #include <iostream>
// using namespace std;

// int main() {
//     int age[2];
//     char sex[2];

//     cin >> age[0] >> sex[0]
//     >> age[1] >> sex[1];

//     if((age[0] >= 19 || age[1] >= 19)
//      && (sex[0] == "M" || sex[1] == "M")) {
//         cout << 1;
//      }

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int age_m;
    int age_f;
    char sex_m;
    char sex_f;

    cin >> age_m >> sex_m
    >> age_f >> sex_f;

    if((age_m >= 19 || age_f >= 19)
     && (sex_m == 'M' || sex_f == 'M')) {
        cout << 1;
     }
     else 
    cout << 0;
     
    return 0;
}