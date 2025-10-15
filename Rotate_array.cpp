#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>arr = {1,2,3};
    for(int el : arr) {
        cout << el << " ";
    }
    
    return 0;
}