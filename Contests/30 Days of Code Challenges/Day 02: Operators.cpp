#include <cmath>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double mealCost = 0.0, totalCost = 0.0;
    int tipPercent = 0, taxPercent = 0;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin >> mealCost >> tipPercent >> taxPercent;
    totalCost = mealCost + ((mealCost * tipPercent) / 100) + ((mealCost * taxPercent) / 100);
    
    cout << "The total meal cost is " << fixed << setprecision(0) << totalCost << " dollars.";
    return 0;
}

