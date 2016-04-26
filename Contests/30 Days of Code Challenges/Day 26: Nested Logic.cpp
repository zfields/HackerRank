#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int actual_dd, actual_mm, actual_yy;
    int expected_dd, expected_mm, expected_yy;
    
    cin >> actual_dd >> actual_mm >> actual_yy >> expected_dd >> expected_mm >> expected_yy;
    
    if ( actual_yy > expected_yy ) {
        cout << 10000;
    } else if ( actual_yy == expected_yy ) {
        if ( actual_mm > expected_mm ) {
            cout << ((actual_mm - expected_mm) * 500);
        } else if ( actual_mm == expected_mm ) {
            if ( actual_dd > expected_dd ) {
                cout << ((actual_dd - expected_dd) * 15);
            } else {
                cout << 0;
            }
        } else {
            cout << 0;
        }
    } else {
        cout << 0;
    }

    return 0;
}

