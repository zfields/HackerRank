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
        int N;
        uint64_t count = 0, sum = 0;
        cin >> N;
        
        /* Enter your code here. Print output to STDOUT */
        count = (N - 1) / 3;
        sum = (count * (count + 1)) / 2 * 3;
        count = (N - 1) / 5;
        sum += (count * (count + 1)) / 2 * 5;
        count = (N - 1) / 15;
        sum -= (count * (count + 1)) / 2 * 15;
        cout << sum << endl;
    }
    return 0;
}

