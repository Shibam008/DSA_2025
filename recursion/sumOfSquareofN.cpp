#include <iostream>
using namespace std;

int sumOfSquareNums(int n) {
    if(n == 1) {
        return 1;
    }
    return n*n + sumOfSquareNums(n-1);
}

int main() {
    cout << sumOfSquareNums(4);
    return 0;
}