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
        int n;
        bool prime = true;
        cin >> n;
        if (n > 1) {
            for (size_t i = pow(M_E, log(n)/2) ; i > 1 ; --i) {
                if ( !(n % i) ) {
                    prime = false;
                    break;
                }
            }
        } else {
            prime = false;
        }
        if ( prime ) {
            cout << "Prime" << endl;
        } else {
            cout << "Not prime" << endl;
        }
    }
    return 0;
}

