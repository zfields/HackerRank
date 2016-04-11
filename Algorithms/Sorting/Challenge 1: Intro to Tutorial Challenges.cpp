#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int V, n;
    vector<int> ar;
    cin >> V >> n;
    for (size_t i = 0 ; i < n ; ++i) {
        int v;
        cin >> v;
        ar.push_back(v);
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        if (v == V) {
            cout << i;
            break;
        }
    }
    return 0;
}

