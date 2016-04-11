#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    
    for (size_t t = 0 ; t < T ; ++t) {
        string S;
        cin >> S;

        bool funny = true;
        char f_last, b_last;
        auto f = S.begin();
        auto b = S.rbegin();
        f_last = *f;
        b_last = *b;
        for (++f, ++b ; f != S.end() ; ++f, ++b) {
            //cout << "[f|f_l|b|b_l]" << endl << "[" << *f << "|" << f_last << "|" << *b << "|" << b_last << "]" << endl;
            int f_diff = abs(tolower(*f) - tolower(f_last)), b_diff = abs(tolower(*b) - tolower(b_last));
            if (f_diff != b_diff) {
                funny = false;
                break;
            }
            f_last = *f;
            b_last = *b;
        }
        if ( funny ) {
            cout << "Funny" << endl;
        } else {
            cout << "Not Funny" << endl;
        }
    }
    return 0;
}

