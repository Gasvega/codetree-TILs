#include <iostream>
using namespace std;

int main() {
    int eng_score_A;
    int math_score_A;
    int eng_score_B;
    int math_score_B;

    cin >> math_score_A >> eng_score_A;
    cin >> math_score_B >> eng_score_B;

    if(math_score_A > math_score_B) {
        cout << "A";
    }
    else if(math_score_B > math_score_A) {
        cout << "B";
    }
    else if(math_score_A == math_score_B) {
        if(eng_score_A > eng_score_B) {
            cout << "A";
        }
        else if (eng_score_B > eng_score_A) {
            cout << "B";
        }
    }


    return 0;
}