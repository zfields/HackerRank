#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int N;
    map<string, int> phone_book;
    cin >> N;
    
    // Build phone book
    for (size_t n = 0 ; n < N ; ++n) {
        string name;
        int number;
        cin >> name >> number;
        phone_book[name] = number;
    }
    
    // Check for names
    for (; !cin.eof() ;) {
        string name;
        cin >> name;
        
        if ( name.empty() ) { break; }
        auto position = phone_book.find(name);
        if ( phone_book.end() != position ) {
            cout << name << "=" << phone_book[name] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    return 0;
}

