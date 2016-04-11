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
        int size = 1;
        cin >> n;
        for (size_t i = 0; i < n ; ++i ) {
            if ( i % 2 ) {
                ++size;
            } else {
                size *= 2;
            }
        }
        cout << size << endl;
    }
    return 0;
}

