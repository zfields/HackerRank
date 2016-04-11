#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int fives = 0, threes = 0, remainder = 0;
        cin >> n;
        
        fives = n / 3;
        remainder = n % 3;
        if ( 1 == remainder ) {
            if ( fives >= 3 ) {
                fives -= 3;
                threes += 2;
            } else {
                cout << "-1" << endl;
                continue;
            }
        } else if ( 2 == remainder ) {
            if ( fives >= 1 ) {
                fives -= 1;
                threes += 1;
            } else {
                cout << "-1" << endl;
                continue;
            }
        }
        for ( int i = 0 ; i < fives ; ++i ) {
            cout << "555";
        }
        for ( int i = 0 ; i < threes ; ++i ) {
            cout << "33333";
        }
        cout << endl;
    }
    return 0;
}

