#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    size_t count = 0;
    char lex[10];
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int count = 0, digit = 0, temp = 0;
        cin >> n;
        temp = n;
        do {
            digit = temp % 10;
            if ( digit && !(n % digit) ) { ++count; }
        } while ( temp /= 10 );
        cout << count << endl;
    }
    return 0;
}

