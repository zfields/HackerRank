#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin >> T;
    for ( size_t t = 0 ; t < T ; ++t ) {
        int A, B;
        float a, b;
        int count = 0, trunc_a, trunc_b;
        cin >> A >> B;
        
        a = pow(M_E, log(A)/2);
        b = pow(M_E, log(B)/2);
        trunc_a = a;
        trunc_b = b;
        
        count = (trunc_b - trunc_a);
        if ( trunc_a == a ) { ++count; }
        
        cout << count << endl;
    }
    return 0;
}

