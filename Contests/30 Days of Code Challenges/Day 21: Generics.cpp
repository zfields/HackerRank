#include <iostream>
#include <vector>

using namespace std;
// Add your code here
template <typename t>
void printArray (vector<t> v_) {
    for (auto &element : v_) {
        cout << element << endl;
    }
}
int main() {
  
    vector<int> vInt{1, 2, 3};
    vector<string> vString{"Hello", "World"};
    
    printArray<int>(vInt);
    printArray<string>(vString);
    
    return 0;
}

