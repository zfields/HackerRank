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
    list<string> names;
    int N;
    cin >> N;
    for(int a0 = 0; a0 < N; a0++){
        string firstName;
        string emailID;
        cin >> firstName >> emailID;
        if ( emailID.find("@gmail.com") != std::string::npos ) {
            names.push_front(firstName);
        }
    }
    names.sort();
    for (auto & name : names) {
        cout << name << endl;
    }
    return 0;
}

