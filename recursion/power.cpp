#include <iostream>
using namespace std;

double pow(int num, int x) {
    if(x == 0 || x == 1) {
        return num;
    }
    return num * pow(num, x-1);
}

int main() {
    cout << pow(2.8,4);
    return 0;
}