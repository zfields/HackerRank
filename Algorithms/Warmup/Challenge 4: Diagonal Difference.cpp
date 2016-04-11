#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    int d1_sum = 0, d2_sum = 0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
          if ( a_i == a_j ) { d1_sum += a[a_i][a_j]; }
          if ( a_j == ((n - 1) - a_i) ) { d2_sum += a[a_i][a_j]; }
       }
    }
    cout << abs(d1_sum - d2_sum);
    return 0;
}

