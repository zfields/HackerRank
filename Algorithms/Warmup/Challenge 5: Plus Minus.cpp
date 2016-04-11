#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    int count_positive = 0, count_negative = 0, count_zero = 0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       if ( arr[arr_i] > 0 ) { ++count_positive; }
       else if ( arr[arr_i] < 0 ) { ++count_negative; }
       else { ++count_zero; }
    }
    printf("%0.6f\n", static_cast<float>(count_positive) / n);
    printf("%0.6f\n", static_cast<float>(count_negative) / n);
    printf("%0.6f\n", static_cast<float>(count_zero) / n);
    return 0;
}

