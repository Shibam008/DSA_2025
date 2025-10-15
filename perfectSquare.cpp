#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n = 80;
    int x = int(sqrt(n));

    if(x*x == n) {
        cout << "true";
    } else cout << "false";


    return 0;
}