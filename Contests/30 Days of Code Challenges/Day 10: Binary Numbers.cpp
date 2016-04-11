#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n, max1s = 0, temp1s = 0;
    cin >> n;
    bitset<20> bits(n);
    
    for(size_t bit = 0; bit < bits.size() ; ++bit) {
        if ( bits[bit] ) {
            ++temp1s;
        } else {
            if ( temp1s > max1s ) { max1s = temp1s; }
            temp1s = 0;
        }
    }
    cout << max1s;
    return 0;
}

