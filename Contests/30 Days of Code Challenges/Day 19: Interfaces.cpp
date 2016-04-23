#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};
//Write your code here
class Calculator : public AdvancedArithmetic {
  public:
    virtual int divisorSum(int n) override {
        int sum = 0;
        if ( 1 == n ) { return 1; }
        
        // Identify the divisors
        for (int lo = 1, hi = n ; lo < hi ; ++lo) {
            if (n % lo) { continue; }
            sum += lo;
            hi = (n / lo);
            if (hi <= lo) { break; }
            sum += hi;
        }
        
        return sum;
    }
};
int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}

