#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial (int x_) {
    if (x_ > 1) {
        return (x_ * factorial(x_ - 1));
    } else {
        return 1;
    }
}

int main() {
    int N;
    cin >> N;
    cout << factorial(N);
    return 0;
}

