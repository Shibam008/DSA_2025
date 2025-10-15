#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int xorAll = 0;
    for(int i=0; i<n; i++) {
        xorAll ^= i;
    }
    cout << xorAll;
    return 0;
}