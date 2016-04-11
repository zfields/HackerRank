#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string time;
    size_t position = string::npos;
    int hour = 13;
    cin >> time;
    position = time.find("AM");
    if ( string::npos != position ) {
        hour = strtol(time.substr((position - 8),2).c_str(), nullptr, 10);
        if ( 12 == hour ) {
            cout << "00" << time.substr((position - 6),6);
        } else {
            cout << time.substr((position - 8),8);
        }
    } else {
        position = time.find("PM");
        hour = strtol(time.substr((position - 8),2).c_str(), nullptr, 10);
        if ( 12 != hour ) {
            hour += 12;
        }
        cout << hour << time.substr((position - 6),6);
    }
    return 0;
}

