#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
	// Add your code here
    Difference (
        vector<int> elements_
    ) :
        elements(elements_),
        maximumDifference(0)
    {}

    void computeDifference () {
        int lowest_value = 0x7FFFFFFF;
        int highest_value = 0x80000000;
        
        for (auto &element : elements) {
            lowest_value = (( element < lowest_value ) * element) + ( element >= lowest_value ) * lowest_value;
            highest_value = (( element > highest_value ) * element) + ( element <= highest_value ) * highest_value;
        }
        
        maximumDifference = (highest_value - lowest_value);
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}

